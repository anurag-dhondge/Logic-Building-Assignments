///////////////////////////////////////////////////////////////////////////////
//                                                                           //
//  Filename:    Assignment7.2.c                                             //
//  Description: Accept amount in US dollar and return its corresponding     //  
//               value in Indian currency.                                   //
//               Consider 1$ as 70 rupees.                                   //
//  Author:      Anurag Dhondge                                              //                                                 
//                                                                           //
///////////////////////////////////////////////////////////////////////////////
//Input  :  10
//Output :  70

#include<stdio.h> 

int DollarToINR(int iNo) 
{ 
    iNo = iNo * 70;
} 

int main() 
{ 
    int iValue = 0, iRet = 0; 

    printf("Enter Amount of US Dollar   : "); 
    scanf("%d",&iValue); 

    iRet  = DollarToINR(iValue); 

    printf("Value in Indian Currency is : %d",iRet);

    return 0; 
} 