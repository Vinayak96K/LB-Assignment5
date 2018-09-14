#include"MyHeader.h"

int main(int argc, char const *argv[])
{
    float fValue, fRet=0;

    printf("Enter length of a side of square:");
    scanf("%f",&fValue);

    fRet=fAreaSquare(fValue);

    printf("Area of square with side %2f:%2f\n",fValue,fRet);

    return 0;
}
