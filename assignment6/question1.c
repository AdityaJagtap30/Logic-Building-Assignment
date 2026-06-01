// Write a program which accept number from user and print small if number is less then 50 and if number is greater then 50 and less then 100 print medium , and if greater then 100 print large. 

#include<stdio.h>
 
void Display( int iNo)
{
  
 if(iNo < 50)
 {
     printf("Small\n");
 }
 else if(iNo >= 50 && iNo <= 100)
 {
    printf("Medium\n");
 }
 else(iNo>100)
 {
    printf("Large\n");
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