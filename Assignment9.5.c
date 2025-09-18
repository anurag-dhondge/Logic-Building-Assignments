///////////////////////////////////////////////////////////////////////////////
//                                                                           //
//  Filename:    Assignment9.5.c                                             //
//  Description: Program which accept number from user and                   //
//               count frequency of such a digits which are less than 6.     //
//  Author:      Anurag Dhondge                                              //                                                 
//                                                                           //
///////////////////////////////////////////////////////////////////////////////
//Input  :  2395    
//Output :  3

#include<stdio.h> 

int CountFour(int iNo) 
{ 
    int iDigit = 0,iCount = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        if(iDigit < 6)
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

    printf("Enter number : "); 
    scanf("%d",&iValue); 

    iRet = CountFour(iValue); 
    printf("Frequency of 4 is : %d",iRet); 

    return 0; 
}