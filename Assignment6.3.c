///////////////////////////////////////////////////////////////////////////////
//                                                                           //
//  Filename:    Assignment6.3.c                                             //
//  Description: Program to find factorial of given number                   //
//  Author:      Anurag Dhondge                                              //                                                 
//                                                                           //
///////////////////////////////////////////////////////////////////////////////



#include<stdio.h> 
int Factorial(int iNo) 
{ 
    int iCnt = 0;
    int iFact = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1 ; iCnt <= iNo ; iCnt++)
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

    iRet = Factorial(iValue); 
    printf("Factorial of number is : %d",iRet); 

    return 0; 
}