///////////////////////////////////////////////////////////////////////////////
//                                                                           //
//  Filename:    Assignment9.1.c                                             //
//  Description: Program which accept number from user and                   //
//               display its digits in reverse                               //
//  Author:      Anurag Dhondge                                              //                                                 
//                                                                           //
///////////////////////////////////////////////////////////////////////////////
//Input  :  1234  
//Output :  4321

#include<stdio.h> 

void DisplayDigit(int iNo) 
{ 
    int iDigit = 0; 

    if(iNo < 0) 
    { 
        iNo = -iNo; 
    } 

    printf("Reverse of number is : ");

    while(iNo != 0) 
    { 
        iDigit = iNo % 10; 

        printf("%d",iDigit); 

        iNo = iNo / 10;
    }
}

int main() 
{ 
    int iValue = 0; 

    printf("Enter a number to Reverse: "); 
    scanf("%d",&iValue);

    DisplayDigit(iValue); 
    return 0; 
} 