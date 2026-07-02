#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOl;

int CheckSpecialsym(char ch)
{
     
      
      if((ch >= 33 && ch <= 42)|| ch == 64||ch == 94)
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

  bRet = CheckSpecialsym(cValue);
  if(bRet == TRUE)
  {
    printf("It is Special Symbol\n");
  }
  else
  {
   printf("It is not Special Symbol\n");
  }

    return 0;

}