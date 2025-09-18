///////////////////////////////////////////////////////////////////////////////
//                                                                           //
//  Filename:    Assignment6.3.c                                             //
//  Description: Program to find factorial of given number                   //
//  Author:      Anurag Dhondge                                              //                                                 
//                                                                           //
///////////////////////////////////////////////////////////////////////////////



#include<stdio.h> 

void Table(int iNo) 
{ 
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    int iCnt = 0 , Ans = 0;

    for(iCnt = 1 ; iCnt <= 10 ; iCnt++)
    {
        Ans = iNo * iCnt;

        printf("%d \n", Ans); 
    }
} 

int main() 
{ 
    int iValue = 0; 

    printf("Enter number : "); 
    scanf("%d",&iValue); 

    Table(iValue); 

    return 0; 
} 