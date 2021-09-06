void stopmotor()
{
//analogWrite(right_motor_speed, 128);
     digitalWrite(right_motor_negitive, LOW);  ///LOW
     digitalWrite(right_motor_positive, LOW);  ///HIGH
     
//     analogWrite(left_motor_speed, 128);
     digitalWrite(left_motor_negitive, LOW); 
     digitalWrite(left_motor_positive, LOW); 
}
