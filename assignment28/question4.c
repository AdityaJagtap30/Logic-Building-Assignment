/*
 Accept number of Rows and Colum and display below pattern
 
 Input iRow = 6,iCol = 6

 * * * * * *
 * # # # * *
 * # # * $ *
 * # * $ $ *
 * * $ $ $ *
 * * * * * *
 

*/
#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0;
    int j = 0;

if(i == 1 || i == iRow || j == 1 || j == iCol)
{
    printf("*\t");
}
else if(i + j == iRow + 1)
{
    printf("*\t");
}
else if(j < i && i + j > iRow + 1)
{
    printf("#\t");
}
else if(j > i && i + j < iRow + 1)
{
    printf("$\t");
}
else
{
    printf(" \t");
}
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter the No of Rows :\n");
    scanf("%d", &iValue1);

    printf("Enter the No of Columns :\n");
    scanf("%d", &iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}