#include <stdio.h>

int main() {
    int arr[10];
    int sum = 0;
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    printf("총점 = %d\n", sum);
    printf("평균 = %.1f\n", (double)sum / 10);
    return 0;
}
