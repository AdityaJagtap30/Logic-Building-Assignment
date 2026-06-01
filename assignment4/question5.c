// Write a program which accept number from user and return addition between summation of all its factors and non factors.
#include<stdio.h>
 
int FactDiff( int iNo)
{  int iSumFact = 0; 
    int iSumNonFact = 0;
   int iCnt = 0;
   for(iCnt = 1; iCnt < iNo ; iCnt++)
   {
   if((iNo % iCnt) == 0)
   {

      iSumFact = iCnt + iSumFact;
   
    }
    else
    {
        iSumNonFact = iSumNonFact + iCnt;
    }
  }
  return iSumFact - iSumNonFact;
}
int main()
{  
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number :\n");
    scanf("%d",&iValue);

    iRet = FactDiff(iValue);
    printf("%d",iRet);


    return 0;
}