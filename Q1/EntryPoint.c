#include"MyHdeader.h"

int main(int argc, char const *argv[])
{
    UINT iRet=0;
    LONG lValue=0;

    printf("Enter a positive integer number:");
    scanf("%ld",&lValue);

    iRet=MinDigit(lValue);

    if(iRet==ERR)
    {
        printf("Incorrect input!\n");
    }
    else
    {
        printf("The smallest digit in %ld: %d\n",lValue,iRet);
    }

    return 0;
}
