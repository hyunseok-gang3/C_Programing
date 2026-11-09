#include <stdio.h>

int main() {
    int days[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int year, month;
    while (1) {
        printf("YEAR = ");
        scanf("%d", &year);
        printf("MONTH = ");
        scanf("%d", &month);
        if (month == 0) {
            break;
        }
        if (month < 1 || month > 12) {
            printf("잘못 입력하였습니다.\n");
            continue;
        }
        if (month == 2) {
            if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
                printf("입력하신 달의 날 수는 29일입니다.\n");
            } else {
                printf("입력하신 달의 날 수는 28일입니다.\n");
            }
        } else {
            printf("입력하신 달의 날 수는 %d일입니다.\n", days[month]);
        }
    }
    return 0;
}
