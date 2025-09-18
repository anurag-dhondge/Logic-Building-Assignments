///////////////////////////////////////////////////////////////////////////////
//                                                                           //
//  Filename:    Assignment5.1.c                                             //
//  Description: Function to print user defined Number times '$' and '*'     //
//  Author:      Anurag Dhondge                                              //
//  Date:        17/05/2025                                                  //
//                                                                           //
///////////////////////////////////////////////////////////////////////////////


#include<stdio.h> 

void Pattern(int iNo) 
{ 
    int i = 0;
    
    if (iNo < 0)
    {
        iNo = -iNo;
    }

    for (i = 1; i <= iNo; i++)
    {
        printf("$* ");
    }

}
 
int main() 
{ 
    int iValue = 0;

    printf("Enter number"); 
    scanf("%d",&iValue);

    Pattern(iValue);  
                                                 
    return 0; 
}  