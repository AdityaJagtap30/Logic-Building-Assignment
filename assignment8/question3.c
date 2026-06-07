//write a program ehich accept the distance in kilometer and return in meter.(1 km = !000 meter)
#include<stdio.h>

 int ConvertIntoMeter(int iKilometer)
 {
   return iKilometer * 1000;
 }

 int main()
 {
    int iValue = 0;
    int iRet = 0;
    printf("Enter the Kilometer\n");
    scanf("%d",&iValue);

    iRet = ConvertIntoMeter(iValue);
    printf(" Total Meter is :%d\n",iRet);
    return 0;

 }