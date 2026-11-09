#include <stdio.h>

int main() {
    double avg[6] = {85.6, 79.5, 83.1, 80.0, 78.2, 75.0};
    int c1, c2;
    scanf("%d %d", &c1, &c2);
    printf("%.1f\n", avg[c1 - 1] + avg[c2 - 1]);
    return 0;
}
