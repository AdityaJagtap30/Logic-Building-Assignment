// write a program which accept width and hight of Rectangle from user and calculate its Area (Area = Width * Hight)

#include<stdio.h>

double AreaOfRectangle(float fWidth,float fHight)
{
   return fWidth * fHight;
}

int main()
{
    float iValue1 = 0.0f,iValue2 = 0.0f;
    double iRet = 0.0;

    printf("Enter Width :\n");
    scanf("%f",&iValue1);

    printf("Enter Hight :\n");
    scanf("%f",&iValue2);

   iRet = AreaOfRectangle(iValue1,iValue2);
   printf("%f",iRet);

   return 0;


}