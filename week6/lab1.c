#include <stdio.h>

void bubbleSortAscending(int arr[], int n) { // 배열을 오름차순으로 정렬하는 함수
    for (int i = 0; i < n - 1; i++) {    // 정렬을 위한 전체 반복을 관리하는 for 문
        for (int j = 0; j < n - i - 1; j++) {    // 항목을 비교하고 교환하는 for 문
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];               // 변수의 스왑 기법을 이용한 값 교환
                arr[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int arr[] = { 7, 4, 5, 1, 3 };
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("초기 상태 배열: [ ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf(" ] \n");

    bubbleSortAscending(arr, n);

    printf("정렬된 배열: [ ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf(" ] \n");

    return 0;
}