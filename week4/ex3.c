#include <stdio.h>

void printNumbers(int n)
{
    if (n == 0)
    {
        return;
    }
    printNumbers(n - 1);
    printf("%d\n", n);
}

int main(void)
{
    int n;
    scanf("%d", &n);
    printNumbers(n);
    return 0;
}