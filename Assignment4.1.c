#include<stdio.h>
int MuiltFact(int iNo)
{
    int i = 0;
    int imult = 1;
    if (iNo <= 0)
    {
        iNo = -iNo;
    }

    for (i = 1; i <= (iNo/2); i++) {
        if (iNo % i == 0)
        {
            imult = imult * i;
        }
    }
    return imult;

}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: ");
    scanf("%d",&iValue);

    iRet = MuiltFact(iValue);
    
    printf("Multiplication of factor is: %d",iRet);

    return 0;
}