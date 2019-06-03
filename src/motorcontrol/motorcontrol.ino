#define s1 7           //defining servo pins on arduino
#define s2 8
#define s3 9
#define s4 10
#define s5 11
#define s6 12
#include <Servo.h>        //including servo library
#include <Stepper.h>      //including stepper library
int i =0;
int a1=200;            
int a2=20;

 int stepsPerRevolution = 200;                         // defining steps per Revolution for the stepper
Stepper myStepper(stepsPerRevolution, A0,A1,A2,A3);    //setting the stepper for gear revolution
Stepper myStepper1(stepsPerRevolution, 2,3,4,5);       //setting the stepper1 for controlling the flow regulator
Servo myservo1;                           //setting the servos                                                                                          
Servo myservo2;
Servo myservo3;
Servo myservo4;
Servo myservo5;
Servo myservo6;
void servoset()                 //function for setting the servo to 0 position

{myservo1.write(0);
myservo2.write(0);
myservo3.write(0);
myservo4.write(0);
myservo5.write(0);
myservo6.write(0);
  
}
void servomove(double x)         //function for the motion of servo to any angle x
{myservo1.write(x);
myservo2.write(x);
myservo3.write(x);
myservo4.write(x);
myservo5.write(x);
myservo6.write(x);
  
}
void motion() {                      //function for the motion of stepper
  // step one revolution  in one direction:
  Serial.println("clockwise");
  myStepper.step(a1);
a1=-a1;             //for making it revolve the other way
}
void motion2() {                    //function for the motion of stepper1
  myStepper1.step(a2);
  a2=-a2;
}
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  myservo1.attach(s1);             //initializing the servos
myservo2.attach(s2);
myservo3.attach(s3);
myservo4.attach(s4);
myservo5.attach(s5);
myservo6.attach(s6);
 myStepper.setSpeed(30);          //setting the stepper speed
 myStepper1.setSpeed(10);         //setting the stepper1 speed

}

void loop() {
  // put your main code here, to run repeatedly:
  
  for (i=1;i<=9856;i++){                         //iterating over the number of data points obtained

  if(i%5==0 && i%30!=0 && i%20!=0 && i%10!=0)
 {
  servomove(25);
 }
 if (i%10==0 && i%30!=0 && i%20!=0){
servomove(0);
}
 if(i%20==0 && i%30!=0)
 {
  //motion();
  servomove(25);
  motion2();
  
 }
 if(i%30==0){
  servomove(0);
  motion();
  }
  }
 
  

}
