// Accept N no from user and Display all such number which is Divisible by 5.
#include<stdio.h>
#include<stdlib.h>
void Display(int Arr[],int iLength)
{
   int iCnt = 0;
   
   
  

   for ( iCnt = 0; iCnt < iLength; iCnt++)
   {
        if((Arr[iCnt]%5) ==0)
        {
          printf("%d\t",Arr[iCnt]);
        }
    
   }
   

   
}

int main()
{
    int iSize = 0,iCnt = 0,iLength = 0;
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
    
    Display(p,iSize);
   
   free(p);
    
   
    return 0;
}