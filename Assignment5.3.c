///////////////////////////////////////////////////////////////////////////////
//                                                                           //
//  Filename:    Assignment5.3.c                                             //
//  Description: Function to print numbers from it's negative to that Number //
//  Author:      Anurag Dhondge                                              //
//  Date:        17/05/2025                                                  //
//                                                                           //
///////////////////////////////////////////////////////////////////////////////


#include<stdio.h>  

void Display(int iNo) 
{ 
   int i = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    for (i = -iNo; i <= iNo; i++)
    {
        printf("%d ",i);
    } 

} 
int main() 
{ 
    int iValue = 0; 
    int iRet = 0;

    printf("Enter number"); 
    scanf("%d",&iValue); 

    Display(iValue); 

    return 0;
} 
