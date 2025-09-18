///////////////////////////////////////////////////////////////////////////////
//                                                                           //
//  Filename:    Assignment7.1.c                                             //
//  Description: Program accept number from user and display below pattern   //
//  Author:      Anurag Dhondge                                              //                                                 
//                                                                           //
///////////////////////////////////////////////////////////////////////////////
//Input :  5
//Output :  * * * * * # # # # #

#include<stdio.h> 

void Display(int iNo) 
{ 
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    int iCnt = 0 , Ans = 0;

    for(iCnt = 1 ; iCnt <= iNo ; iCnt++)
    {
        printf("* \t"); 
    }  

    for(iCnt = 1 ; iCnt <= iNo ; iCnt++)
    {
        printf("# \t"); 
    }  
} 

int main() 
{ 
    int iValue = 0; 

    printf("Enter number : "); 
    scanf("%d",&iValue); 

    Display(iValue); 

    return 0; 
} 