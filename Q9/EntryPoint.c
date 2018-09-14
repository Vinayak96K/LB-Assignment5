#include"MyHeader.h"

int main(int argc, char const *argv[])
{
    float fValue1,fValue2, fRet=0;

    printf("Enter lenght:");
    scanf("%f",&fValue1);
    printf("Enter width:");
    scanf("%f",&fValue2);

    fRet=fAreaRect(fValue1,fValue2);

    printf("Area of rectangle with length %2f and breadth %2f :%2f\n",fValue1,fValue2,fRet);

    return 0;
}
