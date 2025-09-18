#include<stdio.h> 
int FactDiff(int iNo) 
{ 
    int iSumFact = 0;
    int iSumNonFact = 0;
    if (iNo <= 0)
    {
        iNo = -iNo;  
    }

    for (int i = 1; i < iNo; i++)
    {
        if (iNo % i == 0)
        {
            iSumFact = i + iSumFact;
        }
        else
        {
            iSumNonFact = i + iSumNonFact ;
        }
    }

    return iSumFact - iSumNonFact;
} 
int main() 
{ 
    int iValue = 0; 
    int iRet = 0; 

    printf("Enter number"); 
    scanf("%d",&iValue); 

    iRet  = FactDiff(iValue);

    printf("Difference between Summation of all its factors and non factors is: %d",iRet); 

    return 0; 
}