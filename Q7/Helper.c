#include"MyHeader.h"

/////////////////////////////////////////////////////////////////////////////////////////
//  Function Name: fCircumCircle
//  Description: Accepts one number as radius and returns the circumference of circle.
//  Input: float[IN]
//  Output: float[OUT]
//  Author: Vinayak Mahendra Patil
/////////////////////////////////////////////////////////////////////////////////////////

float fCircumCircle(float fRadius)
{
    float fCircum=0;

    fCircum= 2 * pi * fRadius;

    return fCircum;

}
