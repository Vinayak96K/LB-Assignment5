#include"MyHeader.h"

//////////////////////////////////////////////////////////////////////////////////////
//  Function Name: CeToMe
//  Description: Accepts one number as centimeter and returns the meter.
//  Input: int[IN]
//  Output: float[OUT]
//  Author: Vinayak Mahendra Patil
/////////////////////////////////////////////////////////////////////////////////////

float CeToMe(int iNo)
{
    float fMeter=0.0;
    int iCnt=0;

  fMeter= (float) iNo/100;

  return fMeter;  

}