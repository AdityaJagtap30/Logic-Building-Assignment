//write a program which accept the Area in Squar feet and convert it into Squar Meeter(1 Sq Feet = 0.0929 Squar meter)
#include<stdio.h>

double ConvertIntoSqMeter(int iSqFeet)
 {

   return iSqFeet *  0.0929;
 }

 int main()
 {
    int iValue = 0;
    double dRet = 0.0;
    printf("Enter the Arar in Square Feet\n");
    scanf("%d",&iValue);

    dRet = ConvertIntoSqMeter(iValue);
    printf(" Total Sq Meeter is :%lf\n",dRet);
    return 0;

 }