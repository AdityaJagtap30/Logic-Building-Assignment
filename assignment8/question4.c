//write a program wich accept the temperature into fehrenheit and convert into celsius
// (1Celsius = (Fehrenheit - 32) * (5/6)))

#include<stdio.h>

 double ConvertIntoFehrenheit(float fFehrenheit)
 {
   double dCelsius = 0.0;
   return dCelsius = (fFehrenheit - 32) * (5.0/9.0);


 }

 int main()
 {
    float iValue = 0.0f;
    double dRet = 0.0;
    printf("Enter the temperature into Fehrenheit :\n");
    scanf("%d",&iValue);

    dRet = ConvertIntoFehrenheit(iValue);
    printf(" Total Celsius is :%lf\n",dRet);
    return 0;

 }