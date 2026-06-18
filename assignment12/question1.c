//Revers the number
#include<stdio.h>

void DisplayValue(int iNo)
{
   int iDigit = 0;
   int iRev = 0;

   if (iNo < 0)
   {
      iNo = -iNo;
   }

    while(iNo > 0)
    {
        iDigit = iNo % 10;
        iRev = (iRev * 10) + iDigit;
        iNo = iNo / 10;
    }

    printf("Reversed number is : %d\n", iRev);

}
int main()
{  
    int iValue = 0;
    printf("Enter the Number :\n");
    scanf("%d",&iValue);

     DisplayValue(iValue);

    return 0;
}