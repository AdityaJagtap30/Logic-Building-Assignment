//Accept N no from user and accept range Display all ellements from that Range.
#include<stdio.h>
#include<stdlib.h>


void Display(int Arr[], int iLength, int iNo1, int iNo2)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt] >= iNo1) && (Arr[iCnt] <= iNo2))
        {
            printf("%d\t", Arr[iCnt]);
        }
    }
}
int main()
{
    int iSize = 0,iCnt = 0,iValue1 = 0,iValue2 = 0,iRet = 0;
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
     
        printf("Enter First Element:\n");
        scanf("%d",&iValue1);

        printf("Enter Last Element:\n");
        scanf("%d",&iValue2);

         Display(p,iSize,iValue1,iValue2);
       
       

   
   free(p);
    
   
    return 0;
}