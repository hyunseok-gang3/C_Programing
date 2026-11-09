#include <stdio.h>

int main() {
    int arr[100];
    arr[0] = 100;
    scanf("%d", &arr[1]);
    int idx = 1;
    while (arr[idx] >= 0) {
        idx++;
        arr[idx] = arr[idx - 2] - arr[idx - 1];
    }
    for (int i = 0; i <= idx; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
