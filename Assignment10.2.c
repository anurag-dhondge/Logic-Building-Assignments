///////////////////////////////////////////////////////////////////////////////
//                                                                           //
//  Filename:    Assignment10.2.c                                            //
//  Description: Program which accept number from user and                   //
//               return the count of odd digits.                             //
//  Author:      Anurag Dhondge                                              //                                                 
//                                                                           //
///////////////////////////////////////////////////////////////////////////////

//Input  :  1018     
//Output :  2

#include<stdio.h> 

int CountOdd(int iNo) 
{ 
    int iDigit = 0,iCount = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iNo = iNo / 10;

        if(iDigit % 2 != 0)
        {
            iCount++;
        }
        iNo = iNo / 10;
    }  
    return iCount;
} 

int main() 
{ 
    int iValue = 0; 
    int iRet = 0;

    printf("Enter a number : "); 
    scanf("%d",&iValue); 

    iRet = CountOdd(iValue); 
    printf("Frequency of Odd Number is : %d",iRet); 

    return 0; 
}