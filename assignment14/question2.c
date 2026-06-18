//Accept n no from user and return difference between frequency of even number and odd number.
#include<stdio.h>
#include<stdlib.h>
int Difference(int Arr[],int iLength)
{
   int iCnt = 0;
   int iSumEven = 0;
   int iSumOdd = 0;


   for ( iCnt = 0; iCnt < iLength; iCnt++)
   {
        if((Arr[iCnt]%2) ==0)
        {
           iSumEven++;
        }
        else
        {
            iSumOdd++;
        }
     
   }
   
   return iSumEven - iSumOdd ;
   
}

int main()
{
    int iSize = 0,iRet = 0,iCnt = 0,iLength = 0;
    int *p = NULL;
    printf("enter no of Ellements\n");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if (p == NULL)
    {
        printf("Unable to allocate the Memory\n");
        return -1;
    }

    printf("Enter the Ellement :\n");
    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter Element :\n");
        scanf("%d",&p[iCnt]);
    }
    
   iRet = Difference(p,iSize);
   printf("Result is :\n%d",iRet);
   free(p);
    
   
    return 0;
}