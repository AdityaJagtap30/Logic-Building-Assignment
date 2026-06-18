//write a program which accept the no from user and chech whether 0 is present in it or not.
#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
BOOL ChkZero(int iNo)
{
    int iDigit = 0;

      if (iNo < 0)
   {
      iNo = -iNo;
   }

    while(iNo > 0)
    {
        iDigit = iNo % 10;
        if (iDigit == 0)
        {
        return TRUE;
        }
        else
        {
            return FALSE;
        }
        
        iNo = iNo / 10;
    }

    return iDigit;

}
int main()
    {
     int iValue = 0;
     BOOL bRet = FALSE;

    printf("Enter the Number :\n");
    scanf("%d",&iValue);

    bRet = ChkZero(iValue);
   if (bRet == TRUE)
    {
         printf("Zero is present\n");
    }
    else
    {
        printf("Zerois not present\n");
    }
        

           
        return 0;

    }
