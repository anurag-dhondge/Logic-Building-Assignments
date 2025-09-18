///////////////////////////////////////////////////////////////////////////////
//                                                                           //
//  Filename:    Assignment11.1.c                                            //
//  Description: Accept number from user and display below pattern.          //
//  Author:      Anurag Dhondge                                              //                                                 
//                                                                           //
///////////////////////////////////////////////////////////////////////////////

//Input  :  5      
//Output :  A   B   C   D   E   


#include<stdio.h>

void Pattern(int iNo)
{

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    int iCnt = 0;
    char ch = 'A';

    for(iCnt = 1; iCnt <= iNo; iCnt++,ch++)
    {
        printf("%c \t",ch);
    }
}


int main() 
{ 
    int iValue = 0; 

    printf("Enter number of elements : "); 
    scanf("%d %d",&iValue); 

    Pattern(iValue); 
    return 0; 
} 