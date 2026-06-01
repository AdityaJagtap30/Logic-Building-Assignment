// Accept  one number from user if number is less than 10 then print "HELLO" Otherwise print"Demo"
#include<stdio.h>

int Display(int iNo)
{
  if(iNo <= 10 )
  {
    printf("HELLO\n");
  }
  else
  {
    printf("DEMO\n"); 
  }

}
int main()
{
   int iValue = 0;

   printf("Enter the Number :\n");
   scanf("%d",&iValue);
   
   Display(iValue);


    return 0;
}
