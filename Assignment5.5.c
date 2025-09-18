///////////////////////////////////////////////////////////////////////////////
//                                                                           //
//  Filename:    Assignment5.5.c                                             //
//  Description: Function to print first 5 multiples of Number               //
//  Author:      Anurag Dhondge                                              //
//  Date:        17/05/2025                                                  //
//                                                                           //
///////////////////////////////////////////////////////////////////////////////


#include<stdio.h> 

int MultipleDisplay(int iNo) 
{ 
    int i = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    for (int i = 1; i <= 5; i++)
    {
        printf("%d ", iNo * i);
    }
    
} 
int main() 
{    
    int iValue = 0; 
    int iRet = 0;

    printf("Enter number"); 
    scanf("%d",&iValue); 

    iRet = MultipleDisplay(iValue); 

    return 0; 
}