///////////////////////////////////////////////////////////////////////////////
//                                                                           //
//  Filename:    Assignment10.5.c                                            //
//  Description: Program which accept number from user and return difference //
//               between summation of even digits and summation of odd digits//
//  Author:      Anurag Dhondge                                              //                                                 
//                                                                           //
///////////////////////////////////////////////////////////////////////////////

//Input  :  2395      
//Output :  -15 (2 - 17)


#include<stdio.h>

int CountDiff(int iNo)
{

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    int iDigit = 0, iSumEven = 0, iSumOdd = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iNo = iNo / 10;

        if(iDigit % 2 == 0)
        {
            iSumEven = iSumEven + iDigit;

        }

        else
        {
            iSumOdd = iSumOdd + iDigit;
        }        
    }

    return iSumEven - iSumOdd;
}

int main()
{

    int iValue  = 0, iRet = 0;
    printf("Enter the value : ");
    scanf("%d",&iValue);

    iRet = CountDiff(iValue);

    printf("The Difference is : %d",iRet);

    return 0;
}