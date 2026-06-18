/*
 Accept number of Rows and Colum and display below pattern
 
 Input iRow = 5,iCol = 5

2 4 6 8 10
1 3 5 7 9 
2 4 6 8 10
1 3 5 7 9 

*/

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0;
    int j = 0;
    int iNo = 1;

    for(i = 1; i <= iRow; i++)
    {
        if(i%2 != 0)
        {
           iNo = 2;
        }
        else
        {
           iNo = 1;
        }

        for  (j= 1; j <= iCol; j++)
        {
            printf("%d\t",iNo);
            iNo= iNo +2;
        }
         printf("\n");
  
    }
   
}
int main()
{
    int iValue1 = 0;
    int iValue2 = 0;


    printf("Enter the No of Rows :\n");
    scanf("%d", &iValue1);

     printf("Enter the No of Colum :\n");
    scanf("%d",&iValue2);

    Pattern(iValue1,iValue2);

    return 0;
}
