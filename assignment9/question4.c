//write a program which Accept Number from user and return multiplication of all digits.
#include<stdio.h>

int DigitMult( int iNo)
{
   int iCount = 0;
   int iDigit = 0;
   int iSum = 1;

   if (iNo == 0)
   {
    return 0;
   }
   
   if(iNo < 0)
   {
    iNo = -iNo;
   }
   
     while(iNo != 0)
    {
     iDigit = iNo % 10;
     
     iSum = iSum * iDigit;

     iNo = iNo/10;
        
    }
    return iSum;    
      
   
    }
  
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number\n");
    scanf("%d",&iValue);

     iRet = DigitMult(iValue);

     printf("Multiplication of all Digits is :%d\n",iRet);
     return 0;
}