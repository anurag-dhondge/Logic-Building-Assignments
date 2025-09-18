///////////////////////////////////////////////////////////////////////////////
//                                                                           //
//  Filename:    Assignment8.3.c                                             //
//  Description: Program which accept distance in kilometre and Convert      //
//               it into meter. (1 Kilometre = 1000 Meter)                   //
//  Author:      Anurag Dhondge                                              //                                                 
//                                                                           //
///////////////////////////////////////////////////////////////////////////////
//Input  :  5
//Output :  5000

#include<stdio.h>
int DispayMeter(float iNo) 
{ 
    iNo = iNo * 1000;
    return iNo;
} 

int main() 
{ 
    float iValue = 0.0f, iRet = 0.0f; 

    printf("Enter distance : \n"); 
    scanf("%f",&iValue); 

    iRet = DispayMeter(iValue);
    printf("Value in meter is : %.2f",iRet); 
    
    return 0; 
} 