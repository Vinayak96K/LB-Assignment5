#include"MyHeader.h"

int main(int argc, char const *argv[])
{
    int iValue=0;
    float fRet=0.0;

    printf("Enter number of centimeters:");
    scanf("%d",&iValue);

    fRet=CeToMe(iValue);
    printf("Number of meters:%5f\n",fRet);

    return 0;
}
