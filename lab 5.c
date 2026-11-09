#include <stdio.h>

int main() {
    int fib[41];
    fib[1] = 1;
    fib[2] = 1;
    for (int i = 3; i <= 40; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }
    printf("피보나치 수열 10항 : %d\n", fib[10]);
    printf("피보나치 수열 20항 : %d\n", fib[20]);
    printf("피보나치 수열 30항 : %d\n", fib[30]);
    printf("피보나치 수열 40항 : %d\n", fib[40]);
    return 0;
}
