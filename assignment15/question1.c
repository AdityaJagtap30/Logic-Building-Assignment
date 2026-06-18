//Accept no from user and accept another No and check No is present or not.
#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;


BOOL Display(int Arr[],int iLength,int iNo)
{
   int iCnt = 0;
   
   
  

   for ( iCnt = 0; iCnt < iLength; iCnt++)
   {
        if(Arr[iCnt] == iNo)
        {
          return 1;
        }
        else
        {
            return 0;
        }
    
   }
   

   
}

int main()
{
    int iSize = 0,iCnt = 0,iLength = 0,iNo = 0,iRet = 0;
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
     
        printf("Enter Element  you want to check:\n");
        scanf("%d",&iNo);

       iRet = Display(p,iSize,iNo);

       if(iRet == TRUE)
       {
        printf("Number is Present\n");
       }
       else
       {
        printf("Number is not preent\n");
       }

   
   free(p);
    
   
    return 0;
}