// write a program which accept radius of Circle from user and calculate its area calculate the value of pi is 3.14
#include<stdio.h>

  double AreaofCircle(float fRadius)
   {
    return 3.14 * fRadius * fRadius;
     
   }


int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter Radius\n");
    scanf("%f",&fValue);

    dRet = AreaofCircle(fValue);

    printf("Area is :%f\n",dRet);
    return 0;


}