#pragma config(Motor, port9,            ServoN, tmotorServoStandard, openLoop)
#pragma config(Motor, port6,            ServoX, tmotorServoStandard, openLoop)
#pragma config(Motor,  port7,           ServoS,      tmotorServoStandard, openLoop)
#pragma config(Motor,  port8,           ServoE,      tmotorServoStandard, openLoop)


Main()  // Hope Stuff words!!!!!!

{

while (vexRT[Btn8U] 1 == 1)                       // servo in port 8
  {
motor[ServoE] = 127;
}
while (vexRT [Btn8D] 1 == 1)
{
motor[ServoE] = 0;
}




while (vexRT[Btn7U] 1 == 1)                            // servo port 7
{
motor[ServoOne] = 127;
}
while (vexRT [Btn7D] 1 == 1)
{
motor[ServoOne] = 0;
}



while (vexRT[Btn6U] 1 == 1)                          // servo 6
{
motor[ServoOne] = 127;
}
while (vexRT [Btn6D] 1 == 1)
{
motor[ServoOne] = 0;
}



while (vexRT[Btn5U] 1 == 1)                               // servo 5
{
motor[ServoOne] = 127;
}
while (vexRT [Btn5D] 1 == 1)
{
motor[ServoOne] = 0;
}


   (1=1)
            {
motor[port 2] = vexRT[CH2];

             }

         {
motor[port 3] = vexRT[CH3];

         }
         {
motor[port 4] = vexRT[CH4];

               }
               {
motor[port 5] = vexRT[CH1];

                 }
         
}
