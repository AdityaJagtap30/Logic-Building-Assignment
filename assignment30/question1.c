#include<stdio.h>
void DisplayASSCI()
{
  int i = 0;

  printf("Symbol\tDecimal\tHexa\tOctal\n");

  for (i = 0; i <= 255; i++)
  {
    
  printf("%c\t%d\t%x\t%o",i,i,i,i);
  printf("-------------------------------------\n");

  }
  
}
int main()
{
    DisplayASSCI();
    return 0;
}

  