#pragma warning(disable : 4996)
#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("chcp 65001 > nul");

    int outcome;
    char grade;

    printf("결과 점수를 입력하세요(0~100): ");
    scanf("%d", &outcome);

   
    switch (outcome / 10)
    {
    case 10:
    case 9:
        grade = 'A';
        break;
    case 8:
        grade = 'B';
        break;
    case 7:
        grade = 'C';
        break;
    case 6:
        grade = 'D';
        break;
    default:
        grade = 'F';
        break;
    }

    printf("학점은 %c입니다.\n", grade);

    return 0;
}