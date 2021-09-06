void turnleft (int rspeed,int lspeed)
{
    analogWrite(right_motor_speed, rspeed);
     digitalWrite(right_motor_negitive, LOW);  ///LOW
     digitalWrite(right_motor_positive, HIGH);  ///HIGH
     
     analogWrite(left_motor_speed, lspeed);
     digitalWrite(left_motor_negitive, HIGH); 
     digitalWrite(left_motor_positive, LOW); 
}
