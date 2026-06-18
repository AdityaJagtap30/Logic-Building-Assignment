//Accept n no from user and return frequency of 11 number.
#include<stdio.h>
#include<stdlib.h>
int Difference(int Arr[],int iLength,int iNo)
{
   int iCnt = 0;
   int iSum = 0;


   for ( iCnt = 0; iCnt < iLength; iCnt++)
   {
        if((Arr[iCnt]) ==iNo)
        {
           iSum++;
        }
      
    }
        return iSum ;
   
   

   
}

int main()
{
    int iSize = 0,iRet = 0,iCnt = 0,iLength = 0;
    int *p = NULL; int iNo = 0;
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

     printf("Enter the no of which you want to check frequency :\n");
     scanf("%d",&iNo);
    
   iRet = Difference(p,iSize,iNo);
   printf("Result is :\n%d",iRet);
   free(p);
    
   
    return 0;
}