/*   pattern
    input = 5
     A B C D E
*/ 
#include<stdio.h>
  
void Pattern(int iNo)
{
   int iCnt = 0;
   char ch ='\0';

   for (iCnt = 0,ch = 'A'; iCnt <= iNo ; iCnt++,ch++)
   {
       printf("%c\t",ch);
   }
   
}
int main()
{
   int ivalue = 0;
   printf("Enter the Number :\n");
   scanf("%d",&ivalue);
   Pattern(ivalue);


    return 0;
}