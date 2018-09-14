#include"MyHeader.h"

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Function Name: ChkPythogarus
//  Description: Accepts three numbers as side of triangle and returns true if it satisfies pathogarus formula otherwise returns false. 
//  Input: int[IN,IN,IN]
//  Output: BOOL[OUT]
//  Author: Vinayak Mahendra Patil
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

BOOL ChkPythogarus(int iNo1,int iNo2,int iNo3)
{
    int iSide1=iNo1*iNo1;
    int iSide2=iNo2*iNo2;
    int iSide3=iNo3*iNo3;

        if(iNo1<0)
        {
            iNo1=-iNo1;
        }
        if(iNo2<0)
        {
            iNo2=-iNo2;
        }
        if(iNo3<0)
        {
            iNo3=-iNo3;
        }


        if(iSide3==(iSide1+iSide2))
        {
            return TRUE;
        }
        else if(iSide1==(iSide2+iSide3))
        {
            return TRUE;
        }
        else if(iSide2==(iSide2+iSide3))
        {
            return TRUE;
        }
        else
        {
            return FALSE;
        }
}