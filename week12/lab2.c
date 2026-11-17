#pragma warning(disable : 4996)
#include <stdio.h>

int main() { 
    FILE* filePtr;
    char filename[] = "example.txt";
    char buffer[100];

    filePtr = fopen(filename, "r");

    if (filePtr == NULL) {
        printf("파일을 열 수 없습니다.\n");
        return 1;
    }

    if (fgets(buffer,100,filePtr) != NULL) {
        printf("example.txt 파일 내용: %s", buffer);
    } 
    else {
        printf("파일에서 읽기 실패.\n");
    }

    fclose(filePtr);
    return 0;
}