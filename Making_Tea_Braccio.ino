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
 
  // pointing up 90 degree

  Braccio.ServoMovement(30, 90, 96, 94, 100, 90, 10); // Straight 

  Braccio.ServoMovement(30, 103, 115, 173, 160, 90, 10); 

  Braccio.ServoMovement(30, 103, 115, 173, 150, 90, 68); // Grab Tea Tag

  Braccio.ServoMovement(30, 103, 115, 173, 160, 90, 68);

  Braccio.ServoMovement(30, 60, 80, 173, 100, 90, 68); // Move to cup

  delay(7000);

  Braccio.ServoMovement(30, 60, 80, 180, 120, 90, 68);

  Braccio.ServoMovement(30, 60, 80, 180, 180, 90, 68);

  Braccio.ServoMovement(30, 60, 80, 180, 180, 90, 10); // Drop Tea into Cup

  Braccio.ServoMovement(30, 90, 96, 94, 100, 90, 10); // Straight 

  Braccio.ServoMovement(30, 75, 96, 180, 180, 180, 10);

  Braccio.ServoMovement(30, 75, 125, 163, 180, 180, 10); 

  Braccio.ServoMovement(30, 75, 125, 163, 180, 180, 60); // Grab Sugar

  Braccio.ServoMovement(30, 60, 95, 160, 180, 90, 68);

  Braccio.ServoMovement(30, 60, 115, 150, 150, 90, 68);

  Braccio.ServoMovement(30, 60, 115, 155, 160, 87, 68); // Over cup with Sugar

  Braccio.ServoMovement(30, 60, 115, 155, 160, 90, 10); // Drop sugar into cup

  Braccio.ServoMovement(30, 90, 96, 94, 100, 90, 10); // Straight

  Braccio.ServoMovement(20, 30, 96, 94, 100, 90, 10); //Rotate towards straw

  Braccio.ServoMovement(20, 30, 96, 180, 100, 90, 10); //

  Braccio.ServoMovement(20, 30, 120, 180, 47, 90, 10); // Positions gripper around Straw


  Braccio.ServoMovement(20, 30, 120, 180, 70, 90, 10); // Positions gripper around Straw

  Braccio.ServoMovement(20, 30, 120, 180, 90, 90, 73); // Grip Straw

  Braccio.ServoMovement(20, 30, 120, 180, 50, 90, 73); // Grip Straw

  Braccio.ServoMovement(30, 60, 96, 94, 100, 90, 73); // Straight
  
  Braccio.ServoMovement(27, 69, 90, 180, 100, 90, 73); //going to center on top of cup

  Braccio.ServoMovement(27, 69, 90, 180, 95, 90, 73);

  Braccio.ServoMovement(27, 69, 90, 180, 135, 90, 73);
//centering the straw
  Braccio.ServoMovement(27, 69, 110, 180, 110, 90, 73);
  for(i=0; i<8;i++)
   {
 // put your main code here, to run repeatedly:
     Braccio.ServoMovement(27, 69, 110, 180, 110, 110, 73);
     Braccio.ServoMovement(27, 69, 110, 180, 110, 70, 73);
    }

  Braccio.ServoMovement(30, 90, 96, 94, 100, 90, 73); // Straight


}

void loop() {
 
}
