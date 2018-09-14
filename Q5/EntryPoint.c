#include"MyHeader.h"

int main(int argc, char const *argv[])
{
    float fValue, fRet=0;

    printf("Enter radius:");
    scanf("%f",&fValue);

    fRet=fAreaCircle(fValue);

    printf("Area of circle with radius %2f:%2f\n",fValue,fRet);

    return 0;
}
