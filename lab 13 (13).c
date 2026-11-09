#include <stdio.h>

int main() {
    int arr[10];
    int max_even = -10000;
    int min_odd = 10000;
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] % 2 == 0) {
            if (arr[i] > max_even) {
                max_even = arr[i];
            }
        } else {
            if (arr[i] < min_odd) {
                min_odd = arr[i];
            }
        }
    }
    printf("%d %d\n", min_odd, max_even);
    return 0;
}
