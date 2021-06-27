 #include <Servo.h>
int ang = 0; 

Servo s11;
Servo s13;
Servo s8;
Servo s4;
Servo s0;
 int val ;
void setup()
{
  s11.attach(11);
   s13.attach(13);
   s8.attach(8);
   s4.attach(4);
   s0.attach(0);

}
void loop()
{ 
  for (val = 0; val<= 90; val += 1) {
  
     s11.write(val);
     s13.write(val);
     s8.write(val); 
     s4.write(val);
     s0.write(val);
    delay(10);
  }
  for (val = 90; val >= 0; val -= 1) {
     s11.write(val);
    s13.write(val);
     s8.write(val); 
     s4.write(val);
     s0.write(val);
    delay(10);    
    
    

  }

  val = analogRead(A0);             
  val = map(val,0 , 1023,0 , 90); 
  s13.write(val); 
delay(1000);
  
  val = analogRead(A1);             
  val = map(val, 1023, 0, 90, 0);
  s11.write(val);
  delay(1000);
 val = analogRead(A2);             
  val = map(val, 1023, 0, 90, 0);
  s8.write(val);
  delay(1000);
   val = analogRead(A3);             
  val = map(val, 1023, 0, 90, 0);
  s4.write(val);
  delay(1000);
   val = analogRead(A4);             
  val = map(val, 1023, 0, 90, 0);
  s0.write(val);
  delay(1000);
  
} 
