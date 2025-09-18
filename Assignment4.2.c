#include<stdio.h>
void FactRev(int iNo)
{
    if (iNo <= 0)
    {
        iNo = -iNo;  
    }

    for (int i = iNo / 2; i >= 1; i--)
    {
        if (iNo % i == 0)
        {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    FactRev(iValue);
    
    return 0;
}
