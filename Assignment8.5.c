///////////////////////////////////////////////////////////////////////////////
//                                                                           //
//  Filename:    Assignment8.5.c                                             //
//  Description: Program which accept area in square feet and                //
//               convert it into square meter.                               //
//               (1 square feet = 0.0929 Square meter)                       //
//  Author:      Anurag Dhondge                                              //                                                 
//                                                                           //
///////////////////////////////////////////////////////////////////////////////
//Input  :  5
//Output :  0.464515

#include<stdio.h>
double SquareMeter(int iValue)
{ 
    double dSqmeter = 0.0;
    dSqmeter = 0.0929f * iValue;
    
    return dSqmeter;
} 

int main() 
{ 
    int iValue = 0;
    double dRet = 0.0; 

    printf("Enter area in square feet : \n"); 
    scanf("%d",&iValue); 

    dRet = SquareMeter(iValue);
    printf("Value in Square meter is : %.6lf",dRet); 
    
    return 0; 
} 