void turnright (int rspeed,int lspeed)
{
    analogWrite(right_motor_speed, rspeed);
     digitalWrite(right_motor_negitive, HIGH);  ///LOW
     digitalWrite(right_motor_positive, LOW);  ///HIGH
     
 
     digitalWrite(left_motor_negitive, LOW); 
     digitalWrite(left_motor_positive, HIGH); 
    analogWrite(left_motor_speed, lspeed);
}
