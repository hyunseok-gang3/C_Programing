#pragma waring(disable : 4996)
#include <stdio.h>

int manin() {
    FILE* file;
    char ch1 = 'A', ch2 = 'B';

    file = fopen("oneletter.txt", "w");
    if (file == NULL) {
        printf("파일을 열 수 없습니다.\n");
        return 1;
    }

    fputc(ch1, file);
    fputc(ch2, file);

    fclose(file);

    printf("oneletter.txt 파일에 문자 '%c', '%c'를 저장했습니다.\n", ch1, ch2);
    return 0;
}