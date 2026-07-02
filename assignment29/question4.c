//Accept character from user and check it is small case or not (a-z).
#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOl;

int CheckChar(char ch)
{
     
      
      if((ch >= 'a' && ch <= 'z'))
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
    printf("It is small case\n");
  }
  else
  {
   printf("It is not small case\n");
  }

    return 0;

}