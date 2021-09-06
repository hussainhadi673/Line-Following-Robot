#define left_motor_speed 10
#define left_motor_negitive A1
#define left_motor_positive A0
#define right_motor_positive A2
#define right_motor_negitive A3  
#define right_motor_speed 9

int check=0;
int S2;
int S1;
int S0;
int S_1;
int S_2;

unsigned long time1 = millis();

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(2, INPUT);/////////S1
pinMode(3, INPUT);/////////S2
pinMode(4, INPUT);/////////S3
pinMode(5, INPUT);/////////S4
pinMode(6, INPUT);/////////S5

pinMode(9, OUTPUT);/////////S5
pinMode(A1, OUTPUT);/////////S5
pinMode(A2, OUTPUT);/////////S5
pinMode(A3, OUTPUT);/////////S5
pinMode(A4, OUTPUT);/////////S5
pinMode(10, OUTPUT);/////////S5

}

void loop()
{

  sensors();
  pid();
  

//////////////////////////////////////////////  
  if(S_2==0 && check==0)
  {
    stopmotor();
    delay(100);

     turnleft(150,150);
    delay(100);
     
  sensors();
    
    while(S0==1)
    {
  sensors();
  turnleft(150,150);
  sensors();
    }
    
     stopmotor();
    delay(100);
    
    check=check+1;
  }
  if(check==1)
  {
  sensors();
  pid();    
  }


//////////////////////////////////////////////

  if(S2==0 && check==1)
  {
    stopmotor();
    delay(100);

    forward(200,170);
    delay(80);

  sensors();
    
    while(S1==1)
    {
  sensors();
      turnright(100,200);
  sensors();
    }
    
     stopmotor();
    delay(100);
    
    check=check+1;
  }
  if(check==2)
  {
  sensors();
  pid();    
  }


//////////////////////////////////////////////


  if(S_2==0 && check==2)
  {
    stopmotor();
    delay(100);

    forward(200,170);
    delay(50);

  sensors();
    
    while(S_2==1)
    {
  sensors();
  turnleft(125,125);
  sensors();
    }
    while(S0==1)
    {
  sensors();
  turnleft(125,125);
  sensors();
    }
     stopmotor();
    delay(100);

   forward(200,170);
    delay(200);

     stopmotor();
    delay(100);

  sensors();

while(S0==1)
    {
  sensors();
  turnright(100,130);
  sensors();
    }    
   
    check=check+1;
  }
   if(check==3)
  {
  sensors();
  pid();    
  }

//////////////////////////////////////////////


  if(S_2==0 && check==3)
  {
    stopmotor();
    delay(100);

    forward(200,170);
    delay(200);

  sensors();
    
    while(S0==1)
    {
  sensors();
  turnleft(120,150);
  sensors();
    }

     stopmotor();
    delay(100);
    
    check=check+1;
  }
   if(check==4)
  {
  sensors();
  pid();    
  }

//////////////////////////////////////////////


  if(S_2==0 && check==3)
  {
    stopmotor();
    delay(100);

    forward(200,170);
    delay(100);

    stopmotor();
    delay(100);

  sensors();
    
    while(S_1==1)
    {
  sensors();
  turnleft(125,125);
  sensors();
    }

     stopmotor();
    delay(1000);
    
    check=check+1;
  }
   if(check==4)
  {
  sensors();
  pid();    
  }
//////////////////////////////////////////////


  if(S_2==0 && check==4)
  {
    stopmotor();
    delay(100);

    forward(200,170);
    delay(150);

  sensors();
    
    while(S0==1)
    {
  sensors();
  turnleft(150,125);
  sensors();
    }

     stopmotor();
    delay(100);
    
    check=check+1;
  }
   if(check==5)
  {
  sensors();
  pid();    
  }
//////////////////////////////////////////////


  if(S2==0 && check==5)
  {
    stopmotor();
    delay(100);

    forward(200,170);
    delay(150);

  sensors();
    
    while(S_1==1)
    {
  sensors();
  turnright(120,150);
  sensors();
    }

     stopmotor();
    delay(100);
    
    check=check+1;
  }
   if(check==5)
  {
  sensors();
  pid();    
  }

//////////////////////////////////////////////


  if(S_2==0 && check==6)
  {
    stopmotor();
    delay(100);

    forward(200,170);
    delay(200);

    stopmotor();
    delay(100);

  sensors();
    
    while(S0==1)
    {
  sensors();
  turnleft(150,125);
  sensors();
    }

  turnleft(150,125);
    delay(100);


     stopmotor();
    delay(100);
    
    check=check+1;
  }
   if(check==5)
  {
  sensors();
  pid();    
  }

//////////////////////////////////////////////


  if(S_2==0 && check==5)
  {
    stopmotor();
    delay(100);

  //   turnleft(150,0);
  //  delay(100);
     
  sensors();
    
    while(S1==1)
    {
  sensors();
  turnleft(150,150);
  sensors();
    }

     stopmotor();
    delay(100);
    
   forward(200,170);
    delay(150);

  sensors();

    while(S0==1)
    {
  sensors();
  turnleft(150,150);
  sensors();
    }

     stopmotor();
    delay(100);

    check=check+1;
  }
  if(check==6)
  {
  sensors();
  pid();    
  }

//////////////////////////////////////////////


  if(S2==0 && check==6)
  {
    stopmotor();
    delay(100);

   forward(200,170);
    delay(250);

    stopmotor();
    delay(100);
    
  sensors();
    while(S1==1)
    {
  sensors();
  turnright(100,150);
  sensors();
    }
        
     stopmotor();
    delay(100);
    
    check=check+1;
  }
  if(check==7)
  {
  sensors();
  pid();    
  }

//////////////////////////////////////////////


  if(S_2==0 && check==7)
  {
    stopmotor();
    delay(10000);

  sensors();
    while(S0==1)
    {
  sensors();
  turnleft(150,150);
  sensors();
    }
        
     stopmotor();
    delay(100);
    
    check=check+1;
  }
  if(check==8)
  {
  sensors();
  pid();    
  }

//////////////////////////////////////////////


  if(S_2==0 && check==8)
  {
    stopmotor();
    delay(100);

   forward(200,170);
    delay(150);

  sensors();
    while(S1==1)
    {
  sensors();
  turnleft(150,120);
  sensors();
    }
        
     stopmotor();
    delay(100);
    
    check=check+1;
  }
  if(check==9)
  {
  sensors();
  pid();    
  }

//////////////////////////////////////////////


  if(S_2==0 && check==9)
  {
    stopmotor();
    delay(100);

   forward(200,170);
    delay(150);

  sensors();
    while(S_1==1)
    {
  sensors();
  turnleft(150,120);
  sensors();
    }
        
     stopmotor();
    delay(100);
    
    check=check+1;
  }
  if(check==10)
  {
  sensors();
  pid();    
  }

//////////////////////////////////////////////


  if(S2==0 && check==10)
  {
    stopmotor();
    delay(100);

   forward(200,170);
    delay(150);

  sensors();
    while(S2==1)
    {
  sensors();
  turnright(160,160);
  sensors();
    }
        
     stopmotor();
    delay(100);
    
    check=check+1;
  }
  if(check==11)
  {
  sensors();
  pid();    
  }

//////////////////////////////////////////////


  if(S_2==0 && check==11)
  {
    stopmotor();
    delay(100);

   forward(200,170);
    delay(200);

  sensors();
    while(S0==1)
    {
  sensors();
  turnleft(160,160);
  sensors();
    }
        
     stopmotor();
    delay(100);
    
    check=check+1;
  }
  if(check==7)
  {
  sensors();
  pid();    
  }

}
