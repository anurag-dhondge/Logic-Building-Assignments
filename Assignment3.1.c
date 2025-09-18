#include <stdio.h>

void PrintEven(int iNo) {
    if (iNo <= 0) {
        return;
    }
    
    int iCnt = 0, iEven = 2;
    while (iCnt < iNo) {
        printf("%d ", iEven);
        iEven += 2;
        iCnt++;
    }
    printf("\n");
}

int main() {
    int iValue = 0;
    printf("Enter number\n");
    scanf("%d", &iValue);
    PrintEven(iValue);
    return 0;
}
