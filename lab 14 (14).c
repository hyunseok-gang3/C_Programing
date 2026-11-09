#include <stdio.h>

int main() {
    int arr[10];
    int max_under = 0;
    int min_over = 10000;
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] < 100) {
            if (arr[i] > max_under) {
                max_under = arr[i];
            }
        } else {
            if (arr[i] < min_over) {
                min_over = arr[i];
            }
        }
    }
    if (max_under == 0) max_under = 100;
    if (min_over == 10000) min_over = 100;
    printf("%d %d\n", max_under, min_over);
    return 0;
}
