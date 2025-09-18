///////////////////////////////////////////////////////////////////////////////
//                                                                           //
//  Filename:    Assignment10.4.c                                            //
//  Description: Program which accept number from user and                   //
//               return multiplication of all digits.                        //
//  Author:      Anurag Dhondge                                              //                                                 
//                                                                           //
///////////////////////////////////////////////////////////////////////////////

//Input  :  123     
//Output :  6


#include<stdio.h>

int MulDigits(int iNo)
{
    int iDigit = 0, iMult = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        iNo = iNo / 10;

        iMult = iDigit * iMult ;
    }

    return iMult;
}

int main()
{

    int iValue  = 0, iRet = 0;

    printf("Enter the value : ");
    scanf("%d",&iValue);

    iRet = MulDigits(iValue);

    printf("The Multiplication of the given Digits are : %d",iRet);

    return 0;
}