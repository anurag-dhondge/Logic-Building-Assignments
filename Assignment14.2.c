///////////////////////////////////////////////////////////////////////////////
//                                                                           //
//  Filename:    Assignment14.2.c                                            //
//  Description: Accept number from user and display below pattern.          //
//  Author:      Anurag Dhondge                                              //                                                 //
//                                                                           //
///////////////////////////////////////////////////////////////////////////////

//Input  :  iRow = 4    iCol = 4   

//Output :  
//  2   4   6   8
//  1   3   5   7
//  2   4   6   8
//  1   3   5   7

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0, num = 0;

    for(i = 1 ; i <= iRow ; i++)
    {
        if(i % 2 == 0)
        {
            num = 1;  
        }
        else
        {
            num = 2;  
        }

        for(j = 1 ; j <= iCol ; j++)
        {
            printf("%d\t", num);
            num += 2;
        }
        printf("\n");   
    }       
}

int main() 
{ 
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of Rows : \n");
    scanf("%d", &iValue1); 
    
    printf("Enter number of Columns : \n");
    scanf("%d", &iValue2); 

    printf("The Pattern is : \n");
    Pattern(iValue1, iValue2); 

    return 0;
}
