#include <stdio.h>

void Display(int iNo , int iFrequency)
{
    int iCnt = 0;
    if(iFrequency < 0)
    {
        iFrequency = -iFrequency;  
    }

    for(iCnt = 1;iCnt <= iFrequency; iCnt++)
    {
        printf("%d ",iNo);
    }

    printf("\n");
}
int main()
{
    int iValue = 0;
    int iCount = 0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    printf("Enter Frequency\n");
    scanf("%d",&iCount);

    Display(iValue,iCount);
    return 0;
}