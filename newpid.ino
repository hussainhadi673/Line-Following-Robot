void newpid()
{
  sensors();
if (S0==0)
   {
      forward(100,70);
   }
   else if (S1==0)
   {
      forward(110,70);
   }
   else if (S2==0)
   {
      forward(120,70);
   }

   else if (S_1==0)
   {
      forward(100,80);
   }
   else if (S_2==0)
   {
      forward(100,90);
   }
   
   delay(10);
}
