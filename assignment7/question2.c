//Accept amount in US dollar and retun its corresponding  value in indian currency.
// Consider 1$ Dollar as 70 Ruppes

#include<stdio.h>
 
int DollarToInr( int iNo)
{
  int iCnt = 0;
  int iDollar = 0;
 
   iDollar = iNo * 70;

  
  return iDollar;
}
int main()
{  
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number of USD :\n");
    scanf("%d",&iValue);

     iRet = DollarToInr(iValue);   
     printf(" Value in INR is %d",iRet);

    return 0;
}