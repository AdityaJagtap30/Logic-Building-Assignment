#include<stdio.h>
void DisplayASSCI(char ch)
{
  printf("Decimal :%d\tHexa Decimal :%x\tOctal :%o",ch,ch,ch);


  
  
}
int main()
{   char cValue = '\0';
    printf("Enter che character :\n");
    scanf("%c",&cValue);
    DisplayASSCI(cValue);
    return 0;
}

  