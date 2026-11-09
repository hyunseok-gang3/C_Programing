#include <stdio.h>

int main() {
    int arr[10];
    int min = 1000;
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    printf("%d\n", min);
    return 0;
}
