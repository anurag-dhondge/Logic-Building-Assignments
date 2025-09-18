///////////////////////////////////////////////////////////////////////////////
//                                                                           //
//  Filename:    Assignment12.3.c                                            //
//  Description: Accept number from user and display below pattern.          //
//  Author:      Anurag Dhondge                                              //                                                 
//                                                                           //
///////////////////////////////////////////////////////////////////////////////

//Input  :  iRow = 3    iCol = 5 

//Output :  
//  5   4   3   2   1
//  5   4   3   2   1
//  5   4   3   2   1
 
#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0;
    int j = 0;

    for(i = 1 ; i <= iRow ; i++)
    {
        for(j = iCol ; j >= 1 ; j--)
        {
            printf("%d \t",j);
        }
        printf("\n");
    }
}

int main() 
{ 
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of Rows : \n");
    scanf("%d",&iValue1); 
    
    printf("Enter number of Columns : \n");
    scanf("%d",&iValue2); 

    printf("The Pattern is : \n");
    Pattern(iValue1, iValue2); 

    return 0;
} 