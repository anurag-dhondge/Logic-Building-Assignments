///////////////////////////////////////////////////////////////////////////////
//                                                                           //
//  Filename:    Assignment5.4.c                                             //
//  Description: Function to print all odd numbers up to Number              //
//  Author:      Anurag Dhondge                                              //
//  Date:        17/05/2025                                                  //
//                                                                           //
///////////////////////////////////////////////////////////////////////////////


#include<stdio.h> 
 
int OddDisplay(int iNo) 
{ 
    int i = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    for (i = 1; i <= iNo; i++)
    {
        if(i % 2 != 0)
        {
            printf("%d ",i);
        }
    } 

} 
int main()
{ 
    int iValue = 0; 
    int iRet = 0;

    printf("Enter number"); 
    scanf("%d",&iValue); 

    iRet = OddDisplay(iValue);

    return 0;
} 
