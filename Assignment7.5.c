///////////////////////////////////////////////////////////////////////////////
//                                                                           //
//  Filename:    Assignment7.5.c                                             //
//  Description: Program which returns difference between Even Factorial and //
//               Odd Factorial of given number.                              //
//  Author:      Anurag Dhondge                                              //                                                 
//                                                                           //
///////////////////////////////////////////////////////////////////////////////
//Input  :  10  
//Output :  2895  (3840 - 945)

#include<stdio.h> 
int FactorialDiff(int iNo) 
{ 
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    int iCnt = 0 , iFact1 = 1 , iFact2 = 1;

    for(iCnt = 2 ; iCnt <= iNo ; iCnt = iCnt + 2)
    {
        iFact1 = iFact1 * iCnt;
    } 

    for(iCnt = 1 ; iCnt <= iNo ; iCnt = iCnt + 2)
    {
        iFact2 = iFact2 * iCnt;
    }  

    return iFact1 - iFact2;
    
} 
int main() 
{ 
    int iValue = 0,iRet = 0; 
    printf("Enter number : "); 
    scanf("%d",&iValue); 

    iRet = FactorialDiff(iValue); 
    printf("Factorial difference is :  %d",iRet); 

    return 0; 
}
