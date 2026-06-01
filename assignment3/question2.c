//write a programm which accept number from user and print even factors of that number
/*
   Input : 24
   Output : 1 2 4 6 8 12 
*/
#include<stdio.h>

void PrintFactor( int iNo)
{
    int iCnt = 0;
    if(iNo < 0)
    {
      iCnt = -iCnt;

    }
    for(iCnt = 1; iCnt <= iNo/2 ; iCnt++)
    {  
    if((iNo % iCnt == 0) && (iNo % 2 == 0))
    {
        printf("%d\t",iCnt );
     }
  
} 
}

int main()
{
   int iValue = 0;
   printf("Enter the number\n");
   scanf("%d",&iValue);

   PrintFactor(iValue);


    return 0;
}