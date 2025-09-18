///////////////////////////////////////////////////////////////////////////////
//                                                                           //
//  Filename:    Assignment11.2.c                                            //
//  Description: Accept number from user and display below pattern.          //
//  Author:      Anurag Dhondge                                              //                                                 
//                                                                           //
///////////////////////////////////////////////////////////////////////////////

//Input  :  5      
//Output :  5 # 4 # 3 # 2 # 1 #  


#include<stdio.h>

void Pattern(int iNo)
{

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    int iCnt = 0;

    for(iCnt = iNo; iCnt > 0; iCnt--)
    {
        printf("%d\t#\t",iCnt);
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