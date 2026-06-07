//write a program which Accept Number from user and return count of odd digits.
#include<stdio.h>

int OddCount( int iNo)
{
   int iCount = 0;
   int iDigit = 0;

   if(iNo < 0)
   {
    iNo = -iNo;
   }

     while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit % 2 !=0)
        {
        iCount++;
        }
        iNo = iNo/10;
        

    }
    return iCount;
   
  }
   
  
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number\n");
    scanf("%d",&iValue);

     iRet = OddCount(iValue);

     printf("count of odd Digit is :%d\n",iRet);
     return 0;
}