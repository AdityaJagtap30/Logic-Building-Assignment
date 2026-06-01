// Accept one Number and check whether it is Divisible by 5or Not.
#include<stdio.h>
typedef int  BOOL;
#define TRUE 1
# define FALSE 2


BOOL Check( int iNo)
{
    if((iNo % 5) == 0)
    {
      return TRUE;
    }
    else
    {
        return FALSE;
    }
}
int main()
{
  int iValue = 0;
  BOOL bRet = FALSE;

  printf("Enter the Number :\n");
  scanf("%d",&iValue);

bRet = Check(iValue);

if(bRet == TRUE)
{
    printf("Number is Divisible 5\n");
}
    else
    {
        printf("number is not divisible By 5\n");
    }

    return 0;
}