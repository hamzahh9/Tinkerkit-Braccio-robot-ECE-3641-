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



void drop_dice()
{
    // moving to cup

Braccio.ServoMovement(30,         90, 143, 100, 145, 90, 73);
Braccio.ServoMovement(30,         57, 143, 100, 145, 90, 73);

  // drop in cup

Braccio.ServoMovement(30,         57, 143, 100, 145, 90, 35);


}


void setup() {

 pinMode(12, OUTPUT);   // you need to set HIGH the pin 12
 digitalWrite(12, HIGH);

 Braccio.begin(SOFT_START_DISABLED); // and set a proper parameter to disable the soft start

// Braccio.begin();

  
  // pointing up 90 degree

  Braccio.ServoMovement(30,         90, 96, 94, 100, 90,  73);
 

  // pick up 1st die

  Braccio.ServoMovement(30,         90, 165, 100, 180, 90, 30);
  Braccio.ServoMovement(30,         90, 165, 100, 180, 90, 73);

  
  
  drop_dice();

  // move away from cup

  Braccio.ServoMovement(30,         60, 100, 100, 160, 90, 35);

  // pick up 2nd die

  Braccio.ServoMovement(30, 100, 165, 100, 180, 90, 30);
  Braccio.ServoMovement(30, 100, 165, 100, 180, 90, 73);

  drop_dice();


  
  // open gripper

  Braccio.ServoMovement(30,         60, 145, 100, 160, 90, 10);

  // pick up cup

  Braccio.ServoMovement(30,         60, 125, 180, 70, 90, 10);

  
  
  
  
  Braccio.ServoMovement(30,         60, 165, 180, 30, 90, 10);



  Braccio.ServoMovement(30,         60, 145, 180, 50, 90, 10);

//grip cup

  Braccio.ServoMovement(30,         60, 153 ,155, 70, 90, 10);

  Braccio.ServoMovement(30,         60, 153, 155, 70, 90, 60);

////////////////////////


   Braccio.ServoMovement(30,         60, 50, 70, 80, 90, 45);









}

void loop() {
  

}
