#include"MyHeader.h"

//////////////////////////////////////////////////////////////////////////////////////
//  Function Name: Pattern
//  Description: accept one number and prints that number of * and $ on the screen.
//  Input: int[IN]
//  Output: NA
//  Author: Vinayak Mahendra Patil
/////////////////////////////////////////////////////////////////////////////////////

void Pattern(int iNo)
{
    int iCnt=0;
    
    if(iNo<0)
    {
        iNo=-iNo;
    }

    if(iNo==0)
    {
        return;
    }
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        printf("*\t$\t");
    }

}