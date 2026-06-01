//write a program which accept the number from the user and print even factor of that number
/*
   Input : 36
   Output : 2 6 12 18
*/
#include<stdio.h>

void PrintFactor( int iNo)
{
    int iCnt = 0;
    if(iNo < 0)
    {
      iCnt = -iCnt;

    }
    for(iCnt = 1; iCnt <= iNo/2; iCnt++)
    {  
    if((iNo % iCnt == 0) && (iCnt % 2 == 0))
    {
        printf("%d\t",iCnt );
     }
  
} 
}

int main()
{
   int iValue = 0;
   printf("Enter the number\n");
   scanf("%d",&iValue);

   PrintFactor(iValue);


    return 0;
}