#include <Braccio.h>
#include <Servo.h>

Servo base;
Servo shoulder;
Servo elbow;
Servo wrist_rot;
Servo wrist_ver;
Servo gripper;

int count = 0;
int i = 0;
int j = 0;
int k = 0;
int m1 = 90;
int m2 = 90;
int m3 = 90;
int m4 = 90;
int m5 = 90;
int m6 = 73;


void setup() {

 pinMode(12, OUTPUT);   // you need to set HIGH the pin 12
 digitalWrite(12, HIGH);

 Braccio.begin(SOFT_START_DISABLED); // and set a proper parameter to disable the soft start

// Braccio.begin();
/*
  
  // pointing up 90 degree

  Braccio.ServoMovement(30,         90, 96, 94, 100, 90,  10);

  //////////////////

  Braccio.ServoMovement(30,         30, 96, 94, 100, 140,  10);

  Braccio.ServoMovement(30,         30, 65, 94, 180, 140,  10);

  Braccio.ServoMovement(30,         30, 65, 145, 180, 140,  10);


  Braccio.ServoMovement(30,         60, 115, 110, 175, 140,  10);
   Braccio.ServoMovement(30,         37, 120, 138, 175, 140,  10);
     Braccio.ServoMovement(30,         37, 120, 137, 175, 140,  10);
        Braccio.ServoMovement(30,         37, 129, 137, 175, 140,  10);
           //Closing or grabbing the ball
           
           Braccio.ServoMovement(30,         37, 132, 137, 175, 140, 73);
                                                                           
                 //moving with the ball                                                          
                                                                             Braccio.ServoMovement(30,         37, 96, 137, 175, 140, 73);
            // adjusting before taking the ball
               Braccio.ServoMovement(30,         45, 96, 137, 175, 140, 73);                                                               
                   Braccio.ServoMovement(30,         45, 96, 137, 100, 140, 73);
               Braccio.ServoMovement(30,         45, 96, 137, 100, 90, 73);
               Braccio.ServoMovement(30,         138, 96, 137, 100, 90, 73);  
              //letting go of the balls
                Braccio.ServoMovement(30,         138, 96, 137, 100, 90, 10);  

 // Braccio.ServoMovement(30,         30, 133, 147, 180, 180,  10);

 // Braccio.ServoMovement(30,         30, 133, 147, 180, 180,  73);

  delay(300);

  //////////////////////// 2nd part //////////////
/*

Braccio.ServoMovement(30,         30, 96, 94, 180, 180,  73);

Braccio.ServoMovement(30,         140, 96, 94, 180, 90,  73);

Braccio.ServoMovement(30,         140, 90, 94, 150, 90,  73);

Braccio.ServoMovement(30,         137, 100, 94, 150, 90,  73);

Braccio.ServoMovement(30,         137, 100, 94, 150, 90,  73);

Braccio.ServoMovement(30,         132, 125, 94, 153, 90,  73);

Braccio.ServoMovement(30,         132, 125, 94, 165, 90,  10);

Braccio.ServoMovement(30,         90, 120, 94, 100, 90,  10);

delay(1);

*/






}

void loop() {
  // put your main code here, to run repeatedly:
  //pointing ub
  Braccio.ServoMovement(30,         90, 96, 94, 100, 90,  10);
 
 Braccio.ServoMovement(30,         30, 96, 94, 100, 140,  10);

  Braccio.ServoMovement(30,         30, 65, 94, 180, 140,  10);

  Braccio.ServoMovement(30,         30, 65, 145, 180, 140,  10);


  Braccio.ServoMovement(30,         60, 115, 110, 175, 140,  10);
   Braccio.ServoMovement(30,         37, 120, 138, 175, 140,  10);
     Braccio.ServoMovement(30,         37, 120, 137, 175, 140,  10);
        Braccio.ServoMovement(30,         37, 129, 137, 175, 140,  10);
           //Closing or grabbing the ball
           
           Braccio.ServoMovement(30,         37, 132, 137, 175, 140, 73);
                                                                           
                 //moving with the ball                                                          
                                                                             Braccio.ServoMovement(30,         37, 96, 137, 175, 140, 73);
            // adjusting before taking the ball
               Braccio.ServoMovement(30,         45, 96, 137, 175, 140, 73);                                                               
                   Braccio.ServoMovement(30,         45, 96, 137, 100, 140, 73);
               Braccio.ServoMovement(30,         45, 96, 137, 100, 90, 73);
               Braccio.ServoMovement(30,         138, 96, 137, 100, 90, 73);  
              //letting go of the balls
                Braccio.ServoMovement(30,         138, 96, 137, 100, 90, 10);  

 // Braccio.ServoMovement(30,         30, 133, 147, 180, 180,  10);

 // Braccio.ServoMovement(30,         30, 133, 147, 180, 180,  73);

  delay(300);

  //////////////////////// 2nd part //////////////
/*

Braccio.ServoMovement(30,         30, 96, 94, 180, 180,  73);

Braccio.ServoMovement(30,         140, 96, 94, 180, 90,  73);

Braccio.ServoMovement(30,         140, 90, 94, 150, 90,  73);

Braccio.ServoMovement(30,         137, 100, 94, 150, 90,  73);

Braccio.ServoMovement(30,         137, 100, 94, 150, 90,  73);

Braccio.ServoMovement(30,         132, 125, 94, 153, 90,  73);

Braccio.ServoMovement(30,         132, 125, 94, 165, 90,  10);

Braccio.ServoMovement(30,         90, 120, 94, 100, 90,  10);

delay(1);

*/


}
