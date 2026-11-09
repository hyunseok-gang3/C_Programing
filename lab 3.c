#include <stdio.h>

int main() {
    int count[10] = {0, };
    int n;
    while (1) {
        scanf("%d", &n);
        if (n == 0) {
            break;
        }
        count[n % 10]++;
    }
    for (int i = 0; i < 10; i++) {
        if (count[i] > 0) {
            printf("%d : %d개\n", i, count[i]);
        }
    }
    return 0;
}
