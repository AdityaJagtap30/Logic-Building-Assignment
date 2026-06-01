// Write a program which accept number from user and return summation of all its non Factorial

#include<stdio.h>
 
int FactSum( int iNo)
{  int iSum = 0; 
   int iCnt = 0;
   for(iCnt = 1; iCnt <= iNo ; iCnt++)
   {
   if((iNo % iCnt) != 0)
   {

      iSum = iCnt + iSum;
   
    }
  }
  return iSum;
}
int main()
{  
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number :\n");
    scanf("%d",&iValue);

    iRet = FactSum(iValue);
    printf("%d",iRet);


    return 0;
}