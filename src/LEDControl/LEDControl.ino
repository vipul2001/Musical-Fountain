#define oi 2        //defining pin for centre nozzle orange colour led
#define wi 3         //defining pin for centre nozzle white colour led
#define ri 5          //defining pin for centre nozzle red colour led
#define go 6           //defining pin for outer nozzles green colour led
#define wo 7            //defining pin for outer nozzles white colour led
#define ro 8             //defining pin for outer nozzles red colour led


#include <Servo.h>       //including servo library
#include <SD.h>          //including library for read from an sd card connected to arduino
#include <SPI.h>         //including library for connecting sd card to arduino
#include <Stepper.h>     //including stepper library
File myFile;

float readLineUser()
{
  String r;
  char c;
  while(myFile.available())
  {
    c=myFile.read();
    if(c==',')
    {
      return (r.toFloat());
    }
    else if(c=='\n')
    {
      r="";
      
    }
    else
    {
      r+=c;
    }
  }
}

//below are the functions for glowing and turning off different leds in pairs
void ored()
{
  digitalWrite(oi,HIGH);
  digitalWrite(ro,HIGH);
}
void ogreen()
{
  digitalWrite(oi,HIGH);
  digitalWrite(go,HIGH);
}
void owhite()
{
  digitalWrite(oi,HIGH);
  digitalWrite(wo,HIGH);
}
void wred()
{
  digitalWrite(wi,HIGH);
  digitalWrite(ro,HIGH);
}
void wgreen()
{
  digitalWrite(wi,HIGH);
  digitalWrite(go,HIGH);
}
void rgreen()
{
  digitalWrite(ri,HIGH);
  digitalWrite(go,HIGH);
}
void rwhite()
{
  digitalWrite(ri,HIGH);
  digitalWrite(wo,HIGH);
}
void multi()
{
  digitalWrite(oi,HIGH);
  digitalWrite(wi,HIGH);
  digitalWrite(ri,HIGH);
  digitalWrite(wo,HIGH);
  digitalWrite(ro,HIGH);
  digitalWrite(go,HIGH);
}
void low()
{
  digitalWrite(oi,LOW);
  digitalWrite(wi,LOW);
  digitalWrite(ri,LOW);
  digitalWrite(wo,LOW);
  digitalWrite(ro,LOW);
  digitalWrite(go,LOW);
}


void setup() {

 
  
pinMode(oi,OUTPUT);
pinMode(wi,OUTPUT);
pinMode(ri,OUTPUT);
pinMode(go,OUTPUT);
pinMode(wo,OUTPUT);
pinMode(ro,OUTPUT);
 // Open serial communications and wait for port to open:
  Serial.begin(9600);
  while (!Serial) {
    ; // wait for serial port to connect. Needed for native USB port only
  }


  Serial.print("Initializing SD card...");

  if (!SD.begin(4)) {
    Serial.println("initialization failed!");
    while (1);
  }
  Serial.println("initialization done.");
 myFile = SD.open("SongData.txt");
  // open the file. note that only one file can be open at a time,
  // so you have to close this one before opening another.
}
void loop() {
   myFile = SD.open("SongData.txt");
  while(myFile.available()) {
    double s=readLineUser();                     //storing the data point value in a variable s
    low();
    
if ((s>0)&&(s<=5)){
 multi();
 }
 if ((s>5)&&(s<=10)){
  ored();
 }
if ((s>10)&&(s<=15)){
  ogreen();
 }  
if ((s>15)&&(s<=20)){
  owhite();
 }
if ((s>920)&&(s<=25)){
wred();
 }
 if ((s>25)&&(s<=30)){
 wgreen();
 }
 if ((s>30)&&(s<=35)){
  rgreen();
 }
 if ((s>35)){
 rwhite();
 }
 

 delay(107.54);
 
}
  
myFile.close();
}
