#pragma warning(disable : 4996)
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    system("chcp 65001 > nul");

    int year;

    printf("연도를 입력하세요: ");
    scanf("%d", &year);

    if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0))
    {
        printf("윤년입니다.\n");
    }
    else
    {
        printf("평년입니다.\n");
    }
    return 0;
}