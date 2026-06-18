/*   pattern
    input = 5
     5 # 4 # 3 # 2 # 1 #
*/ 

#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;

    for(iCnt = iNo; iCnt >= 1; iCnt--)
    {
        printf("%d # ", iCnt);
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