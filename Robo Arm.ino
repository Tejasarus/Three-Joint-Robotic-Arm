#include <Servo.h>
 
Servo servo; 
Servo servo2;
Servo servo3;


int x_axis;
int y_axis;
int servo_valx;
int servo_valy;
int c = 0;

 
void setup() 
{
  servo.attach(9); 
  servo2.attach(8);
  servo3.attach(10);

  pinMode(A1, INPUT);
  pinMode(A0, INPUT);
  pinMode(2, INPUT);

  servo.write(0);
  servo2.write(0);
 
}
 
void loop() 
{
  
  if (digitalRead(2) == HIGH)
  {
   if(c == 0)
   {
    servo3.write(45);
    c = 1;
    delay(500);
   }
   else if( c==1)
   {
    servo3.write(0);
    c = 0;
     delay(500);
   }
   }
   
 
  x_axis = analogRead(A0);
  y_axis = analogRead(A1);
  servo_valx = map(x_axis,0,1023,0,180);
  servo_valy = map(y_axis,0,1023,0,180);
  servo.write(servo_valx);
  servo2.write(servo_valy);

}

 

 
