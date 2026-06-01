// write a program to find factorial Multiplication of given no .
#include <stdio.h>

void iFactorial(int iNo)
{
    int iCnt = 0;
    int iFact = 1;
   for(iCnt = 1; iCnt <= iNo ;iCnt++)
   {
       iFact = iFact * iCnt;
   }
   printf("%d",iFact);
}

int main()
{  
    int iValue  = 0;

    printf("Enter Number :\n");
    scanf("%d",&iValue);

    iFactorial(iValue);   

    return 0;
}

