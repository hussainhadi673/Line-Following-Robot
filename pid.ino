void pid()
{
 int Setpoint=0;
 int CV; 
 int error=0;
 int previous_error=0;
int derivative=0;
  int Kp=10;
  int Kd=3;

  float motor_s;
  float RMS;
  float LMS;  
  int RMS_MAX=200;
  int LMS_MAX=200;
  int RBS=100;
  int LBS=130;
  
    sensors();

  if (S2==0)
  {
    CV=2;
  }
  if (S1==0)
  {
    CV=1;
  }
  if (S0==0)
  {
    CV=0;
  }
  if (S_1==0)
  {
    CV=-2;
  }
  if (S_2==0)
  {
    CV=-3;
  }
    
error=Setpoint-CV;
 derivative = error - previous_error;
 
  motor_s=Kp*error +  Kd*derivative ;

  RMS=RBS+motor_s;
  LMS=LBS-motor_s;
  
  if(RMS>RMS_MAX)
  {
    RMS=RMS_MAX;
  }
  
  if(LMS>LMS_MAX)
  {
    LMS=LMS_MAX;
  }

forward(RMS, LMS);
/*    analogWrite(right_motor_speed, LMS);
     digitalWrite(right_motor_negitive, LOW);  ///LOW
     digitalWrite(right_motor_positive, HIGH);  ///HIGH
     
     analogWrite(left_motor_speed, RMS);
     digitalWrite(left_motor_negitive, LOW); ///LOW
     digitalWrite(left_motor_positive, HIGH); ///HIGH
*/
}
