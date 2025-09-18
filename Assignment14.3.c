///////////////////////////////////////////////////////////////////////////////
//                                                                           //
//  Filename:    Assignment14.3.c                                            //
//  Description: Accept number from user and display below pattern.          //
//  Author:      Anurag Dhondge                                              //                                                 //
//                                                                           //
///////////////////////////////////////////////////////////////////////////////

//Input  :  iRow = 5    iCol = 5  

//Output :  
//  a   b   c   d   e
//  1   2   3   4   5
//  a   b   c   d   e
//  1   2   3   4   5
//  a   b   c   d   e

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0 , num = 0;
    char ch;

    for(i = 1 ; i <= iRow ; i++)
    {
        if(i % 2 != 0)  
        {
            ch = 'a';
            for(j = 1 ; j <= iCol ; j++)
            {
                printf("%c\t", ch);
                ch++;
            }
        }
        else  
        {
            num = 1;
            for(j = 1 ; j <= iCol ; j++)
            {
                printf("%d\t", num);
                num++;
            }
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
