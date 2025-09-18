///////////////////////////////////////////////////////////////////////////////
//                                                                           //
//  Filename:    Assignment10.1.c                                            //
//  Description: Program which accept number from user and                   //
//               return the count of even digits.                            //
//  Author:      Anurag Dhondge                                              //                                                 
//                                                                           //
///////////////////////////////////////////////////////////////////////////////

//Input  :  1018     
//Output :  2

#include<stdio.h> 

int CountEven(int iNo) 
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

        if(iDigit % 2 == 0)
        {
            iCount++;
        }
        
    }    
    return iCount;
} 

int main() 
{ 
    int iValue = 0; 
    int iRet = 0;

    printf("Enter a number : "); 
    scanf("%d",&iValue); 

    iRet = CountEven(iValue); 
    printf("Frequency of Even Number is : %d",iRet); 

    return 0; 
}