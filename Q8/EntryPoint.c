#include"MyHeader.h"

int main(int argc, char const *argv[])
{
    LONG lValue,lRet=0;

    printf("Enter number of square feets:");
    scanf("%ld",&lValue);

    lRet=Estimate(lValue);

    printf("The estimated cost for %ld sq.ft. is %ld\n",lValue,lRet);


    return 0;
}
