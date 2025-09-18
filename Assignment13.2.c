///////////////////////////////////////////////////////////////////////////////
//                                                                           //
//  Filename:    Assignment13.2.c                                            //
//  Description: Accept number from user and display below pattern.          //
//  Author:      Anurag Dhondge                                              //                                                 
//                                                                           //
///////////////////////////////////////////////////////////////////////////////

//Input  :  iRow = 4    iCol = 4   

//Output :  
//  A   B   C   D
//  a   b   c   d
//  A   B   C   D
//  a   b   c   d

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0;
    int j = 0;
    char ch = 'A';

    for(i = 1 ; i <= iRow ; i++)
    {
        if(i % 2 == 0) 
        {
            ch = 'a'; 
        }

        else
        {
            ch = 'A'; 

        }

        for(j = 1 ; j <= iCol ; j++)
        {
            printf("%c\t",ch);
            ch++;
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