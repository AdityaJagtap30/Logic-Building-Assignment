// write a programwgwhich accept range from user and Display all Even numbers in between that range.
#include<stdio.h>

  void RangrDisplay(int iStart,int iEnd)
  {
    int iCnt = 0;
    
  
         for (iCnt = iStart; iCnt <= iEnd; iCnt++)
        {
            if(iCnt % 2 == 0)
            {
                printf(" Even no are :%d\t",iCnt);
            }
        }
        
  
  }
   
int main()
{
    int iValue1 = 0,iValue2 = 0;
    printf("Enter Starting point\n");
    scanf("%d",&iValue1);
   
    printf("Enter End point\n");
    scanf("%d",&iValue2);
    
     RangrDisplay(iValue1,iValue2);
    return 0;
}