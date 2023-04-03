#include <Braccio.h>
#include <Servo.h>

Servo base;
Servo shoulder;
Servo elbow;
Servo wrist_rot;
Servo wrist_ver;
Servo gripper;


void setup() {

pinMode(12, OUTPUT);   // you need to set HIGH the pin 12
 digitalWrite(12, HIGH);

 Braccio.begin(SOFT_START_DISABLED); // and set a proper parameter to disable the soft start



  
 // Braccio.begin();

  Braccio.ServoMovement(30,         90, 96, 94, 100, 90,  73);     // 90 up (default)
 

  // picking up

  Braccio.ServoMovement(30,         90, 165, 90, 180, 90, 30);
  Braccio.ServoMovement(30,         90, 165, 90, 180, 90, 73);

  // prepare to throw

  Braccio.ServoMovement(10, 90, 75, 90, 75, 90, 73);

  // throwing

  int count = 0;

    int m1 = 90;
     int m2 = 90; // 75 --> 150
    int m3 = 90;
    int m4 = 90;
    int m5 = 90;
    // int m6 = 73;      // --> 50 

    int m6 = 73;

  Braccio.ServoMovement(30    ,m1, m2, m3, m4, m5, m6);


  Braccio.ServoMovement(30    ,m1, m2, m3, m4, m5, 50);



Braccio.ServoMovement(10    ,m1, 40, m3, m4, m5, 50);

for(int i=0;i<180;i++)
{
  Braccio.ServoMovement(10    ,m1, 40, m3, m4, i, 50);
}

//Braccio.ServoMovement(10    ,m1, 165, m3, 0, m5, 50);


  for(int i=90;i<120;i++)
  {
    
    //going forward

 // Braccio.ServoMovement(10    ,m1, i, m3, m4, m5, 50);

 // if(i == 119) Braccio.ServoMovement(10    ,m1, 160, m3, m4, m5, 50);

  

  }
  

}

void loop() {


}