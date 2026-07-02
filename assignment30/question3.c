// Input = d
// Output = d c b a

// Input = X
// Output = X Y Z
#include<stdio.h>

void Display(char ch)
{
  int iCount = 0;
  if (ch >= 'A' && ch <= 'Z')
  {
    for (iCount = ch ;iCount <= 'Z';iCount++)
    {
        printf("%c\t",iCount);
    }
    
  }

  else if (ch >= 'a' && ch <= 'z')
  {
    for (iCount = ch ;iCount >= 'a';iCount--)
    {
        printf("%c\t",iCount);
    }
    
  }

}
int main()
{
    char cValue = '\0';
    printf("Enter the Character : \n");
    scanf("%c",&cValue);
    Display(cValue); 
    return 0;
}