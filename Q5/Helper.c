#include"MyHeader.h"

//////////////////////////////////////////////////////////////////////////////////////
//  Function Name: fAreaCircle
//  Description: Accepts one number as radius and returns the area of circle.
//  Input: float[IN]
//  Output: float[OUT]
//  Author: Vinayak Mahendra Patil
/////////////////////////////////////////////////////////////////////////////////////

float fAreaCircle(float fRadius)
{
    float fArea=0;

    fArea= pi * (fRadius*fRadius);

    return fArea;

}
