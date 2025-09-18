///////////////////////////////////////////////////////////////////////////////
//                                                                           //
//  Filename:    Assignment12.4.c                                            //
//  Description: Accept number from user and display below pattern.          //
//  Author:      Anurag Dhondge                                              //                                                 
//                                                                           //
///////////////////////////////////////////////////////////////////////////////

//Input  :  iRow = 3   iCol = 4

//Output :  
//  *   #   *   #
//  *   #   *   #
//  *   #   *   #

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0;
    int j = 0;

    for(i = 1 ; i <= iRow ; i++)
    {
        for(j = 1 ; j <= iCol ; j++)
        {
            if(j%2 == 0)
            {
                printf("#\t");
            }
            else
            {
                printf("*\t");
            }
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