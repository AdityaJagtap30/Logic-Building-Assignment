// Write a progrem which written Different Between even factor and odd factor of a ginen number.
#include<stdio.h>
int FactorDifference(int iNo)
{
    int iCnt = 0;
    int iOddSum = 0;
    int iEvenSum = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iNo % iCnt == 0)     // Check factor
        {
            if(iCnt % 2 == 0)   // Even factor
            {
                iEvenSum = iEvenSum + iCnt;
            }
            else                // Odd factor
            {
                iOddSum = iOddSum + iCnt;
            }
        }
    }

    return (iEvenSum - iOddSum);
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number :\n");
    scanf("%d", &iValue);

    iRet = FactorDifference(iValue);

    printf("Difference between even and odd factors is : %d\n", iRet);

    return 0;
}