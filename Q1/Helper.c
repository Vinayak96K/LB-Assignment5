#include"MyHdeader.h"

//////////////////////////////////////////////////////////////////////////////////////
//  Function Name: MinDigit
//  Description: Accepts one number and returns the smallest digit in the number.
//  Input: LONG[IN]
//  Output: UINT[OUT]
//  Author: Vinayak Mahendra Patil
/////////////////////////////////////////////////////////////////////////////////////

UINT MinDigit(LONG lNO)
{
    UINT iDigit=0,iMin=9;

    if(lNO<0)
    {
        lNO=-lNO;
    }

    if(lNO!=0)
    {
    while(lNO!=0)
    {
        iDigit=lNO%10;

        if(iDigit==0)
            {
                iMin=0;
                break;
            }

        if(iDigit<iMin)
        {
            iMin=iDigit;
        }
        lNO=lNO/10;
    }
    return iMin;
    }
    else
    {
        return ERR;
    }
}