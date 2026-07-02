//Accept character from user and check it is digit or not (0-9).
#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOl;

int CheckChar(char ch)
{
     
      
      if((ch >= '0' && ch <= '9'))
        {
           return 1;
        }
         return 0;
}

int main()
{
  char cValue = '\0';
  BOOl bRet = FALSE;

  printf("Enter the character\n");
  scanf("%c",&cValue);

  bRet = CheckChar(cValue);
  if(bRet == TRUE)
  {
    printf("It is Digit\n");
  }
  else
  {
   printf("It is not Digit\n");
  }

    return 0;

}