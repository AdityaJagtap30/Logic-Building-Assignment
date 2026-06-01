// Write a program which accept number from user and print first five multiple of N.  

#include<stdio.h>
 
void Display( int iNo)
{
int iCnt = 0;
 
    for ( iCnt = 1; iCnt <= 5; iCnt++)
    {
     
      printf("%d\t",iCnt * iNo);
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