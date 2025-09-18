///////////////////////////////////////////////////////////////////////////////
//                                                                           //
//  Filename:    Assignment7.4.c                                             //
//  Description: Program to find odd factorial of given number.              //
//  Author:      Anurag Dhondge                                              //                                                 
//                                                                           //
///////////////////////////////////////////////////////////////////////////////
//Input  :  10  
//Output :  945  (9 * 7 * 5 * 3 * 1) 

#include<stdio.h> 
int OddFactorial(int iNo) 
{ 
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    int iCnt = 0 , iFact = 1;

    for(iCnt = 1 ; iCnt <= iNo ; iCnt = iCnt + 2)
    {
        iFact = iFact * iCnt;
    }  
    return iFact;
} 
int main() 
{ 
    int iValue = 0,iRet = 0; 

    printf("Enter number : "); 
    scanf("%d",&iValue); 

    iRet = OddFactorial(iValue); 
                                                        
    printf("Odd Factorial of number are :  %d",iRet); 
    return 0; 
}
