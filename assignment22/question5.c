/*   pattern
    input = 8
    2 4 6 8 10 12 14 16 
*/ 

#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;
    int iMult = iCnt;

    for(iCnt = 0; iCnt <= iNo; iCnt++)
    {
      iMult = iMult + 2;
      printf("%d\t",iMult);
    }
}

int main()
{
    int ivalue = 0;

    printf("Enter the Number :\n");
    scanf("%d", &ivalue);

    Pattern(ivalue);

    return 0;
}