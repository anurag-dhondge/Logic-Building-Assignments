#include<stdio.h>
void NonFactRev(int iNo)
{
    if (iNo <= 0)
    {
        iNo = -iNo;  
    }

    for (int i = 2; i < iNo ; i++)
    {
        if (iNo % i != 0)
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
    
    NonFactRev(iValue);
    return 0;
}
