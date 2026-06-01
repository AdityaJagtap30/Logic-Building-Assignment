// write a program which accept number from user and Display its Table in rewers.
#include <stdio.h>

void iTable(int iNo)
{
   int iCnt = 0;

   for(iCnt = 10; iCnt >= 1; iCnt--)
   {
        printf("%d\t",iNo * iCnt);
   }
}

int main()
{  
    int iValue  = 0;

    printf("Enter Number :\n");
    scanf("%d",&iValue);

    iTable(iValue);   

    return 0;
}

