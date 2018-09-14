#include"MyHeader.h"

int main(int argc, char const *argv[])
{
    int iValue1=0,iValue2=0,iValue3=0;
    BOOL bRet=TRUE;

    printf("Enter side 1:");
    scanf("%d",&iValue1);
    printf("Enter side 2:");
    scanf("%d",&iValue2);
    printf("Enter side 3:");
    scanf("%d",&iValue3);

    bRet=ChkPythogarus(iValue1,iValue2,iValue3);
    if(bRet)
    {
        printf("TRUE\n");
    }
    else
    {
        printf("FALSE\n");
    }

    return 0;
}
