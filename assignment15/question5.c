//Accept N no from user and return product of all Odd Number
#include<stdio.h>
#include<stdlib.h>

int Display(int Arr[], int iLength)
{
    int iCnt = 0;
    int iProduct = 1;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] % 2 != 0)
        {
           iProduct = iProduct * Arr[iCnt];
        }
    }
     return iProduct;
}
int main()
{
    int iSize = 0,iCnt = 0,iRet = 0;
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
     
         iRet = Display(p,iSize);
         printf(" Product is :%d",iRet);
       
       

   
   free(p);
    
   
    return 0;
}