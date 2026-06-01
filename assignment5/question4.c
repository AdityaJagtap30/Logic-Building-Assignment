// Write a program which accept N number from user and print all Odd numbers up to N number. 

#include<stdio.h>
 
void Display( int iNo)
{
int iCnt = 0;
 
    for ( iCnt = 1; iCnt<=iNo; iCnt++)
    {
      if(iNo % iCnt != 0) 
      printf("%d\t",iCnt);
    }
}
int main()
{  
    int iValue = 0;

    printf("Enter Number :\n");
    scanf("%d",&iValue);

     Display(iValue);   


    return 0;
}