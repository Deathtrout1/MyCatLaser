#include <Servo.h>
Servo servoa;
Servo servob;
int angle = 0;
int angle1=0;
int num;

void setup() {
  servoa.attach(14);
  servoa.write(angle);
   servob.attach(15);
  servob.write(angle);

}
void loop() 
{ 
    num = random(1,4);

switch(num) {
  case 1:


 
 for(angle = 0; angle < 50; angle++)  
  {                                  
     
    servoa.write(angle);  
    delay(20);           
                      
  } 
  for(angle = 0; angle < 60; angle++)  
  {                                  
     
    servob.write(angle);             
    delay(15);                   
  } 
 
 
 for(angle = 50; angle >0; angle--)  
  {                                  
     
    servoa.write(angle);             
    delay(20);                   
  } 
   // now scan back from 180 to 0 degrees
  for(angle = 60; angle > 0; angle--)    
  {                                
 
    servob.write(angle);           
    delay(15);       
  }
  break;
   
    
  break;

  case 2:
  for (angle = 0; angle <= 90; angle += 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    servoa.write(angle);
    servob.write(angle);// tell servo to go to angleition in variable 'angle'
    delay(20);                       // waits 15ms for the servo to reach the angleition
  }
  for (angle = 90; angle >= 0; angle -= 1) { // goes from 180 degrees to 0 degrees
    servoa.write(angle); 
     servob.write(angle);
     // tell servo to go to angleition in variable 'angle'
    delay(20);                       // waits 15ms for the servo to reach the angleition
  }
  break;
  
  case 3:
   { 
     for(angle = 0; angle < 8; angle++)                             
     {num=random(0,50);
    servoa.write(num); 
    delay(num*25); 
      num=random(-50,50)  ;        
    servob.write(num);
    delay(abs(num)*50);}
}
    break;
    }}
