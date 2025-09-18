///////////////////////////////////////////////////////////////////////////////
//                                                                           //
//  Filename:    Assignment5.2.c                                             //
//  Description: Function to print numbers from 1 to Number                  //
//  Author:      Anurag Dhondge                                              //
//  Date:        17/05/2025                                                  //
//                                                                           //
///////////////////////////////////////////////////////////////////////////////


#include<stdio.h> 
int Display(int iNo) 
{ 
    int i = 0;
    if (iNo < 0)
    {
        iNo = -iNo;
    }

    for (i = 1; i <= iNo; i++)
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

    iRet = Display(iValue); 

    return 0; 
}