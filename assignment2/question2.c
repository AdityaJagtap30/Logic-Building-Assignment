// Accept one Number from user and print that number of * on screen use 
#include<stdio.h>

int Display(int iNo)
{
    int iCnt = 1;

     while( iCnt <= iNo )
    {
      printf("*");
       iCnt++;
    }

}
int main()
{
   int iValue = 0;

   printf("Enter the Number :\n");
   scanf("%d",&iValue);
   
   Display(iValue);


    return 0;
}
