///////////////////////////////////////////////////////////////////////////////
//                                                                           //
//  Filename:    Assignment7.3.c                                             //
//  Description: Program to find even factorial of given number              //
//  Author:      Anurag Dhondge                                              //                                                 
//                                                                           //
///////////////////////////////////////////////////////////////////////////////
//Input  :  10  
//Output :  3840   (10 * 8 * 6 * 4 * 2)

#include<stdio.h> 
int EvenFactorial(int iNo) 
{ 
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    int iCnt = 0 , iFact = 1;

    for(iCnt = 2 ; iCnt <= iNo ; iCnt = iCnt + 2)
    {
        iFact = iFact * iCnt;
    }  
    return iFact;
 
} 
int main() 
{ 
    int iValue = 0,iRet = 0; 

    printf("Enter number"); 
    scanf("%d",&iValue); 

    iRet = EvenFactorial(iValue); 

    printf("Even Factorial of number are :  %d",iRet); 

    return 0; 
}