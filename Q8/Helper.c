#include"MyHeader.h"

//////////////////////////////////////////////////////////////////////////////////////
//  Function Name: Estimate
//  Description: Accepts on number as total square feets and return the estimated cost.
//  Input: LONG[IN]
//  Output: LONG[OUT]
//  Author: Vinayak Mahendra Patil
/////////////////////////////////////////////////////////////////////////////////////

LONG Estimate(LONG lNo)
{
    LONG lAns=0;

    if(lNo<0)
    {
        lNo=-lNo;
    }

    lAns=lNo*560;

    return lAns;

}