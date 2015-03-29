#include <Servo.h> 
 
Servo myservo;  // create servo object to control a servo 
                // twelve servo objects can be created on most boards
 
int pos = 0;    // variable to store the servo position 
int potpin = 0;  // analog pin used to connect the potentiometer
int val;    // variable to read the value from the analog pin 



int ms = 1000; 
int s = 1000;
int hs = 500;

int head = 2;

int rShoulder = A3;
int lShoulder = A2;

int rArm = A4;
int lArm = A1;

int rElbow = A5;
int lElbow = A0;

int rHip = 4;
int lHip = 9;

int rUTh = 5;
int lUTh = 10;

int rLTh = 6;
int lLTh = 11;

int rUAnkel = 7;
int lUAnkel = 12;

int rLAnkel = 8;
int lLAnkel = 13;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
startupdemo();
}

void loop() {
stand();
  
//  stand();

//  delay(500);
//  pos = 130;
//  myservo.write(pos); 
//  delay(500);
//    pos = 0;
//  myservo.write(pos); 
//  delay(500);
//    myservo.attach(A5);//attach the servo to the pin a3
//    pos = 0;
//  myservo.write(pos); 
//  delay(500);
//  pos = 130;
//  myservo.write(pos); 
//  delay(500);
  // put your main code here, to run repeatedly: 
//  headSweep();
//  
//  rightArmSweep();
//  rightShoulderSweep();
//  rightElbowSweep();
////  
////  leftArmSweep();
////  leftShoulderSweep();
////  leftElbowSweep();
//  
//  RightLegSweep();
//  RightLegDemo();
//  
//  LeftLegSweep();
//  LeftLegDemo();



}



void startupdemo(){

headDemo();
rightArmDemo();
leftArmDemo();

}
void headDemo(){
  headForward();
  headRight();
  headForward();
  headLeft();
  headForward();
}


void rightArmDemo(){
  
 rightArmDown();
  delay(ms);
 rightArmForward();
   delay(ms);
 rightArmUp();
   delay(ms);
 rightArmForward();
  delay(ms);
 rightArmDown();
  delay(ms);
   
 rightArmOutDown();
 delay(ms);
 rightArmOut();
 delay(ms);
 rightArmOutUp();
 delay(ms);
 rightArmOut();
 delay(ms);
 rightArmOutDown();
 delay(ms);
 
}

void leftArmDemo(){
  
  leftArmDown();
   delay(ms);
  leftArmForward();
   delay(ms);
  leftArmUp();
   delay(ms);
  leftArmForward();
   delay(ms);
  leftArmDown();
   delay(ms);

   
 leftArmOutDown();
 delay(ms);
 leftArmOut();
 delay(ms);
 leftArmOutUp();
 delay(s);
 leftArmOut();
 delay(ms);
 leftArmOutDown();
 delay(ms);
 
}

void stand(){
  
  rightHipStand();
//    delay(hs);
  leftHipStand();
//    delay(hs);
  rightThUStand();
//    delay(hs);
  leftThUStand();
//   delay(hs);
  rightThLStand();
//    delay(hs);
  leftThLStand();
//    delay(hs);
  rightAnkelUStand();
//    delay(hs);
  leftAnkelUStand();
//    delay(hs);
  rightAnkelLStand();
//    delay(hs);
  leftAnkelLStand();
//    delay(hs);
}


void headForward(){
  myservo.attach(head);
  pos = 90;
  myservo.write(pos);
  delay(ms);
}
void headLeft(){
  myservo.attach(head);
  pos = 180;
  myservo.write(pos);
  delay(ms);
}
void headRight(){
  
  myservo.attach(head);
  pos = 0;
  myservo.write(pos);
  delay(ms);
}

void rightArmDown(){
  myservo.attach(rShoulder);//attach the servo to the pin a3
  pos = 0;
  myservo.write(pos); 

}
void rightArmForward(){
  myservo.attach(rShoulder);//attach the servo to the pin a3
  pos = 90;
  myservo.write(pos); 

}

void rightArmUp(){
  myservo.attach(rShoulder);//attach the servo to the pin a3
  pos = 180;
  myservo.write(pos); 

}

void rightElbowDown(){
  myservo.attach(rElbow);//attach the servo to the pin a3
  pos = 0;
  myservo.write(pos); 

}
void rightElbowForward(){
  myservo.attach(rElbow);//attach the servo to the pin a3
  pos = 90;
  myservo.write(pos); 

}

void rightElbowUp(){
  myservo.attach(rElbow);//attach the servo to the pin a3
  pos = 180;
  myservo.write(pos); 

}

void leftArmDown(){
  myservo.attach(lShoulder);//attach the servo to the pin a3
  pos = 180;
  myservo.write(pos); 

}
void leftArmForward(){
  myservo.attach(lShoulder);//attach the servo to the pin a3
  pos = 90;
  myservo.write(pos); 

}

void leftArmUp(){
  myservo.attach(lShoulder);//attach the servo to the pin a3
  pos = 0;
  myservo.write(pos); 

}

void leftElbowDown(){
  myservo.attach(lElbow);//attach the servo to the pin a3
  pos = 0;
  myservo.write(pos); 

}
void leftElbowForward(){
  myservo.attach(lElbow);//attach the servo to the pin a3
  pos = 90;
  myservo.write(pos); 

}

void leftElbowUp(){
  myservo.attach(lElbow);//attach the servo to the pin a3
  pos = 180;
  myservo.write(pos); 

}

void rightArmOutDown(){
  myservo.attach(rArm);//attach the servo to the pin a3
    pos = 0;
  myservo.write(pos); 
}

void rightArmOut(){
  myservo.attach(rArm);//attach the servo to the pin a3
    pos = 90;
  myservo.write(pos); 
}
void rightArmOutUp(){
  myservo.attach(rArm);//attach the servo to the pin a3
    pos = 180;
  myservo.write(pos); 
}


void leftArmOutDown(){
  myservo.attach(lArm);//attach the servo to the pin a3
    pos = 160;
  myservo.write(pos); 
}

void leftArmOut(){
  myservo.attach(lArm);//attach the servo to the pin a3
    pos = 90;
  myservo.write(pos); 
}
void leftArmOutUp(){
  myservo.attach(lArm);//attach the servo to the pin a3
    pos = 0;
  myservo.write(pos); 
}






void rightHipStand(){
  
  myservo.attach(rHip);//attach the servo to the pin a3
  Serial.println(myservo.read());
    pos = 90;
  myservo.write(pos); 
}

void leftHipStand(){
  myservo.attach(lHip);//attach the servo to the pin a3
  Serial.println(myservo.read());
    pos = 90;
  myservo.write(pos); 
}

void rightThUStand(){
  myservo.attach(rUTh);//attach the servo to the pin a3
  Serial.println(myservo.read());
    pos = 90;
  myservo.write(pos); 
}

void leftThUStand(){
  myservo.attach(lUTh);//attach the servo to the pin a3
  Serial.println(myservo.read());
    pos = 90;
  myservo.write(pos); 
}
void rightThLStand(){
  myservo.attach(rLTh);//attach the servo to the pin a3
  Serial.println(myservo.read());
    pos = 90;
  myservo.write(pos); 
}

void leftThLStand(){
  myservo.attach(lLTh);//attach the servo to the pin a3
  Serial.println(myservo.read());
    pos = 90;
  myservo.write(pos); 
}

void rightAnkelUStand(){
  myservo.attach(rUAnkel);//attach the servo to the pin a3
  Serial.println(myservo.read());
    pos = 90;
  myservo.write(pos); 
}

void leftAnkelUStand(){
  myservo.attach(lUAnkel);//attach the servo to the pin a3
  Serial.println(myservo.read());
    pos = 90;
  myservo.write(pos); 
}

void rightAnkelLStand(){
  myservo.attach(rLAnkel);//attach the servo to the pin a3
  Serial.println(myservo.read());
    pos = 90;
  myservo.write(pos); 
}

void leftAnkelLStand(){
  myservo.attach(lLAnkel);//attach the servo to the pin a3
  Serial.println(myservo.read());
    pos = 90;
  myservo.write(pos); 
}


















void rightArmSweep(){
  myservo.attach(A3);//attach the servo to the pin a3
  for(pos = 0; pos <= 180; pos += 1) // goes from 0 degrees to 180 degrees 
  {                                  // in steps of 1 degree 
    myservo.write(pos);              // tell servo to go to position in variable 'pos' 
    delay(5);                       // waits 15ms for the servo to reach the position 
  } 
  for(pos = 180; pos>=0; pos-=1)     // goes from 180 degrees to 0 degrees 
  {                                
    myservo.write(pos);              // tell servo to go to position in variable 'pos' 
    delay(5);                       // waits 15ms for the servo to reach the position 
  } 
}
void rightShoulderSweep(){
  myservo.attach(A4);//attach the servo to the pin a3
  for(pos = 0; pos <= 180; pos += 1) // goes from 0 degrees to 180 degrees 
  {                                  // in steps of 1 degree 
    myservo.write(pos);              // tell servo to go to position in variable 'pos' 
    delay(5);                       // waits 15ms for the servo to reach the position 
  } 
  for(pos = 180; pos>=0; pos-=1)     // goes from 180 degrees to 0 degrees 
  {                                
    myservo.write(pos);              // tell servo to go to position in variable 'pos' 
    delay(5);                       // waits 15ms for the servo to reach the position 
  } 
}
void rightElbowSweep(){
  myservo.attach(A5);//attach the servo to the pin a3
  for(pos = 0; pos <= 180; pos += 1) // goes from 0 degrees to 180 degrees 
  {                                  // in steps of 1 degree 
    myservo.write(pos);              // tell servo to go to position in variable 'pos' 
    delay(5);                       // waits 15ms for the servo to reach the position 
  } 
  for(pos = 180; pos>=0; pos-=1)     // goes from 180 degrees to 0 degrees 
  {                                
    myservo.write(pos);              // tell servo to go to position in variable 'pos' 
    delay(5);                       // waits 15ms for the servo to reach the position 
  } 
}


void leftArmSweep(){
  myservo.attach(A2);//attach the servo to the pin a3
  for(pos = 0; pos <= 180; pos += 1) // goes from 0 degrees to 180 degrees 
  {                                  // in steps of 1 degree 
    myservo.write(pos);              // tell servo to go to position in variable 'pos' 
    delay(5);                       // waits 15ms for the servo to reach the position 
  } 
  for(pos = 180; pos>=0; pos-=1)     // goes from 180 degrees to 0 degrees 
  {                                
    myservo.write(pos);              // tell servo to go to position in variable 'pos' 
    delay(5);                       // waits 15ms for the servo to reach the position 
  } 
}
void leftShoulderSweep(){
  myservo.attach(A1);//attach the servo to the pin a3
  for(pos = 0; pos <= 180; pos += 1) // goes from 0 degrees to 180 degrees 
  {                                  // in steps of 1 degree 
    myservo.write(pos);              // tell servo to go to position in variable 'pos' 
    delay(5);                       // waits 15ms for the servo to reach the position 
  } 
  for(pos = 180; pos>=0; pos-=1)     // goes from 180 degrees to 0 degrees 
  {                                
    myservo.write(pos);              // tell servo to go to position in variable 'pos' 
    delay(5);                       // waits 15ms for the servo to reach the position 
  } 
}
void leftElbowSweep(){
  myservo.attach(A0);//attach the servo to the pin a3
  for(pos = 0; pos <= 180; pos += 1) // goes from 0 degrees to 180 degrees 
  {                                  // in steps of 1 degree 
    myservo.write(pos);              // tell servo to go to position in variable 'pos' 
    delay(5);                       // waits 15ms for the servo to reach the position 
  } 
  for(pos = 180; pos>=0; pos-=1)     // goes from 180 degrees to 0 degrees 
  {                                
    myservo.write(pos);              // tell servo to go to position in variable 'pos' 
    delay(5);                       // waits 15ms for the servo to reach the position 
  } 
}


void headSweep(){
   myservo.attach(2);  // attaches the servo on pin 9 to the servo object
   myservo.write(pos);
  for(pos = 0; pos <= 180; pos += 1) // goes from 0 degrees to 180 degrees 
  {                                  // in steps of 1 degree 
    myservo.write(pos);              // tell servo to go to position in variable 'pos' 
    delay(5);                       // waits 15ms for the servo to reach the position 
  } 
  for(pos = 180; pos>=0; pos-=1)     // goes from 180 degrees to 0 degrees 
  {                                
    myservo.write(pos);              // tell servo to go to position in variable 'pos' 
    delay(5);                       // waits 15ms for the servo to reach the position 
  } 
}

void RightLegSweep(){
   myservo.attach(4);  // attaches the servo on pin 9 to the servo object
  for(pos = 0; pos <= 180; pos += 1) // goes from 0 degrees to 180 degrees 
  {                                  // in steps of 1 degree 
    myservo.write(pos);              // tell servo to go to position in variable 'pos' 
    delay(5);                       // waits 15ms for the servo to reach the position 
  } 
  for(pos = 180; pos>=0; pos-=1)     // goes from 180 degrees to 0 degrees 
  {                                
    myservo.write(pos);              // tell servo to go to position in variable 'pos' 
    delay(5);                       // waits 15ms for the servo to reach the position 
  } 
  
     myservo.attach(5);  // attaches the servo on pin 9 to the servo object
  for(pos = 0; pos <= 180; pos += 1) // goes from 0 degrees to 180 degrees 
  {                                  // in steps of 1 degree 
    myservo.write(pos);              // tell servo to go to position in variable 'pos' 
    delay(5);                       // waits 15ms for the servo to reach the position 
  } 
  for(pos = 180; pos>=0; pos-=1)     // goes from 180 degrees to 0 degrees 
  {                                
    myservo.write(pos);              // tell servo to go to position in variable 'pos' 
    delay(5);                       // waits 15ms for the servo to reach the position 
  } 
  
     myservo.attach(6);  // attaches the servo on pin 9 to the servo object
  for(pos = 0; pos <= 180; pos += 1) // goes from 0 degrees to 180 degrees 
  {                                  // in steps of 1 degree 
    myservo.write(pos);              // tell servo to go to position in variable 'pos' 
    delay(5);                       // waits 15ms for the servo to reach the position 
  } 
  for(pos = 180; pos>=0; pos-=1)     // goes from 180 degrees to 0 degrees 
  {                                
    myservo.write(pos);              // tell servo to go to position in variable 'pos' 
    delay(5);                       // waits 15ms for the servo to reach the position 
  } 
  
     myservo.attach(7);  // attaches the servo on pin 9 to the servo object
  for(pos = 0; pos <= 180; pos += 1) // goes from 0 degrees to 180 degrees 
  {                                  // in steps of 1 degree 
    myservo.write(pos);              // tell servo to go to position in variable 'pos' 
    delay(5);                       // waits 15ms for the servo to reach the position 
  } 
  for(pos = 180; pos>=0; pos-=1)     // goes from 180 degrees to 0 degrees 
  {                                
    myservo.write(pos);              // tell servo to go to position in variable 'pos' 
    delay(5);                       // waits 15ms for the servo to reach the position 
  } 
  
     myservo.attach(8);  // attaches the servo on pin 9 to the servo object
  for(pos = 0; pos <= 180; pos += 1) // goes from 0 degrees to 180 degrees 
  {                                  // in steps of 1 degree 
    myservo.write(pos);              // tell servo to go to position in variable 'pos' 
    delay(5);                       // waits 15ms for the servo to reach the position 
  } 
  for(pos = 180; pos>=0; pos-=1)     // goes from 180 degrees to 0 degrees 
  {                                
    myservo.write(pos);              // tell servo to go to position in variable 'pos' 
    delay(5);                       // waits 15ms for the servo to reach the position 
  } 
  
}

void LeftLegSweep(){
   myservo.attach(9);  // attaches the servo on pin 9 to the servo object
  for(pos = 0; pos <= 180; pos += 1) // goes from 0 degrees to 180 degrees 
  {                                  // in steps of 1 degree 
    myservo.write(pos);              // tell servo to go to position in variable 'pos' 
    delay(5);                       // waits 15ms for the servo to reach the position 
  } 
  for(pos = 180; pos>=0; pos-=1)     // goes from 180 degrees to 0 degrees 
  {                                
    myservo.write(pos);              // tell servo to go to position in variable 'pos' 
    delay(5);                       // waits 15ms for the servo to reach the position 
  } 
  
     myservo.attach(10);  // attaches the servo on pin 9 to the servo object
  for(pos = 0; pos <= 180; pos += 1) // goes from 0 degrees to 180 degrees 
  {                                  // in steps of 1 degree 
    myservo.write(pos);              // tell servo to go to position in variable 'pos' 
    delay(5);                       // waits 15ms for the servo to reach the position 
  } 
  for(pos = 180; pos>=0; pos-=1)     // goes from 180 degrees to 0 degrees 
  {                                
    myservo.write(pos);              // tell servo to go to position in variable 'pos' 
    delay(5);                       // waits 15ms for the servo to reach the position 
  } 
  
       myservo.attach(11);  // attaches the servo on pin 9 to the servo object
  for(pos = 0; pos <= 180; pos += 1) // goes from 0 degrees to 180 degrees 
  {                                  // in steps of 1 degree 
    myservo.write(pos);              // tell servo to go to position in variable 'pos' 
    delay(5);                       // waits 15ms for the servo to reach the position 
  } 
  for(pos = 180; pos>=0; pos-=1)     // goes from 180 degrees to 0 degrees 
  {                                
    myservo.write(pos);              // tell servo to go to position in variable 'pos' 
    delay(5);                       // waits 15ms for the servo to reach the position 
  } 
  
       myservo.attach(12);  // attaches the servo on pin 9 to the servo object
  for(pos = 0; pos <= 180; pos += 1) // goes from 0 degrees to 180 degrees 
  {                                  // in steps of 1 degree 
    myservo.write(pos);              // tell servo to go to position in variable 'pos' 
    delay(5);                       // waits 15ms for the servo to reach the position 
  } 
  for(pos = 180; pos>=0; pos-=1)     // goes from 180 degrees to 0 degrees 
  {                                
    myservo.write(pos);              // tell servo to go to position in variable 'pos' 
    delay(5);                       // waits 15ms for the servo to reach the position 
  } 
  
       myservo.attach(13);  // attaches the servo on pin 9 to the servo object
  for(pos = 0; pos <= 180; pos += 1) // goes from 0 degrees to 180 degrees 
  {                                  // in steps of 1 degree 
    myservo.write(pos);              // tell servo to go to position in variable 'pos' 
    delay(5);                       // waits 15ms for the servo to reach the position 
  } 
  for(pos = 180; pos>=0; pos-=1)     // goes from 180 degrees to 0 degrees 
  {                                
    myservo.write(pos);              // tell servo to go to position in variable 'pos' 
    delay(5);                       // waits 15ms for the servo to reach the position 
  } 
  
}

void RightLegDemo() 
{ 
    myservo.attach(8);  // attaches the servo on pin 9 to the servo object 
  val = analogRead(potpin);            // reads the value of the potentiometer (value between 0 and 1023) 
  val = map(val, 0, 1023, 0, 180);     // scale it to use it with the servo (value between 0 and 180) 
  myservo.write(val);                  // sets the servo position according to the scaled value 
  delay(5);                           // waits for the servo to get there 
} 

void LeftLegDemo() 
{ 
    myservo.attach(8);  // attaches the servo on pin 9 to the servo object 
  val = analogRead(potpin);            // reads the value of the potentiometer (value between 0 and 1023) 
  val = map(val, 0, 1023, 0, 180);     // scale it to use it with the servo (value between 0 and 180) 
  myservo.write(val);                  // sets the servo position according to the scaled value 
  delay(5);                           // waits for the servo to get there 
} 
