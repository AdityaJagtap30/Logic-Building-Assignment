// write a programwgwhich accept range from user and Display all even numbers Sumationin between that range.
#include<stdio.h>

  int RangrDisplay(int iStart,int iEnd)
  {
    int iCnt = 0;
    int iSum = 0;
  
         for (iCnt = iStart; iCnt <= iEnd; iCnt++)
        { 
            if (iCnt %2 == 0)
            {
              iSum = iSum + iCnt;
            }
            
             
          }
        
            return iSum;
  }

   
int main()
{
    int iValue1 = 0,iValue2 = 0;
    int iRet = 0;
    printf("Enter Starting point\n");
    scanf("%d",&iValue1);
   
    printf("Enter End point\n");
    scanf("%d",&iValue2);
    
    iRet = RangrDisplay(iValue1,iValue2);
     printf("%d",iRet);
     return 0;
}