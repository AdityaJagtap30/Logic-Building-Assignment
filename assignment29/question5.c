//Accept character from user and check time of exam as per Roll no it should not be case sensitive
#include<stdio.h>


void CheckChar(char ch)
{
      
      if (ch == 'a' || ch == 'A')
        {
           printf("Exam time is 7am\n");
        }
         if (ch == 'b' || ch == 'B')
        {
           printf("Exam time is 8.30 am\n");
        }
        
         if (ch == 'c' || ch == 'C')
        {
           printf("Exam time is 9.20am\n");
        }
        
         if (ch == 'd' || ch == 'D')
        {
           printf("Exam time is 10 am\n");
        }
        
        
        
        
}

int main()
{
  char cValue = '\0';


  printf("Enter the Division\n");
  scanf("%c",&cValue);

   CheckChar(cValue);
 

    return 0;

}