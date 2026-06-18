/*   pattern
    input = 5
    # 1 * # 2 * # 3 * # 4 * # 5 *
*/ 

#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf(" * %d # ", iCnt);
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