///////////////////////////////////////////////////////////////////////////////
//                                                                           //
//  Filename:    Assignment9.3.c                                             //
//  Description: Program which accept number from user and count frequency   //
//               of 2 in it.                                                 //
//  Author:      Anurag Dhondge                                              //                                                 
//                                                                           //
///////////////////////////////////////////////////////////////////////////////
//Input  :  2395    
//Output :  1

#include<stdio.h> 

int CountTwo(int iNo) 
{ 
    int iDigit = 0,iCount = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        if(iDigit == 2)
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
    int bRet = 0; 

    printf("Enter number"); 
    scanf("%d",&iValue);

    bRet = CountTwo(iValue);

    printf("Frequency of 2 is :%d",bRet); 
    return 0; 
} 