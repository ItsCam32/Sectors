using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerMovement : MonoBehaviour
{
    public CharacterController controller;
    public AudioSource outsideWalkingSound;
    public AudioSource[] insideWalkingSounds;
    public Transform groundCheck, cam;
    public LayerMask groundMask;

    public static bool playerCanMove = true;
    public static bool insideHouse = false;

    float stepRate = 0.5f;
    float nextStep = 0.0f;

    float speed = 5f;
    float camYPos;

    float jumpHeight = 1f;
    float jumpRate = 0.9f;
    float nextJump = 0.0f;
    Vector3 velocity;
    float gravity = -12f; // default -9.81f

    float groundDistance = 0.4f;
    bool isGrounded;

    void Start()
    {
        camYPos = cam.position.y;
    }

    void Update()
    {
        if (playerCanMove == true)
        {
            isGrounded = Physics.CheckSphere(groundCheck.position, groundDistance, groundMask);

            if (isGrounded && velocity.y < 0)
            {
                velocity.y = -2f;
            }

            float x = Input.GetAxis("Horizontal");
            float z = Input.GetAxis("Vertical");

            if (cam.position.y < (controller.transform.position.y + 0.611f) && !Input.GetKey(KeyCode.LeftShift))
            {
                cam.position = new Vector3(cam.position.x, cam.transform.position.y + 1f * Time.deltaTime, cam.position.z);
            }

            if (Input.GetKey(KeyCode.LeftShift) && isGrounded == true)
            {
                // Crouch walking
                speed = 2f;
                stepRate = 0.75f;

                if (cam.position.y > controller.transform.position.y + 0.3f)
                {
                    cam.position = new Vector3(cam.position.x, cam.transform.position.y - 1f * Time.deltaTime, cam.position.z);
                }
            }

            else if (Input.GetKey(KeyCode.LeftControl) && isGrounded == true)
            {
                // Sprinting
                speed = 5.5f;
                stepRate = 0.4f;
            }

            else
            {
                // Walking
                speed = 3.75f;
                stepRate = 0.6f;
            }

            Vector3 move = transform.right * x + transform.forward * z;
            controller.Move(move * speed * Time.deltaTime);

            if (Time.time > nextStep && isGrounded == true)
            {
                if (Input.GetKey(KeyCode.W) || Input.GetKey(KeyCode.A) || Input.GetKey(KeyCode.S) || Input.GetKey(KeyCode.D))
                {
                    if (insideHouse == false)
                    {
                        outsideWalkingSound.Play();
                    }
                    else
                    {
                        AudioSource walkSound = insideWalkingSounds[Random.Range(0, insideWalkingSounds.Length)];
                        walkSound.Play();
                    }
                    
                    nextStep = Time.time + stepRate;
                }
            }

            if (Input.GetKeyDown(KeyCode.Space) && isGrounded && Time.time > nextJump)
            {
                nextJump = Time.time + jumpRate;
                velocity.y = Mathf.Sqrt(jumpHeight * -2f * gravity);
            }

            velocity.y += gravity * Time.deltaTime;
            controller.Move(velocity * Time.deltaTime);
        }
    }
}
