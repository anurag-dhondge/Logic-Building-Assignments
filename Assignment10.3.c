///////////////////////////////////////////////////////////////////////////////
//                                                                           //
//  Filename:    Assignment10.3.c                                            //
//  Description: Program which accept number from user and                   //
//               return the count of digits in between 3 and 7.              //
//  Author:      Anurag Dhondge                                              //                                                 
//                                                                           //
///////////////////////////////////////////////////////////////////////////////

//Input  :  4538     
//Output :  2

#include<stdio.h> 

int Count(int iNo) 
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

        if((iDigit > 3) && (iDigit < 7))
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

    iRet = Count(iValue); 
    printf("Frequency of Number between 3 and 7 is: %d",iRet); 

    return 0; 
}