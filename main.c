#include <stdio.h>

#define SIZE 5

int main() {
    int i;
    int a[SIZE] = {1, 2, 3, 4, 5};
    int b[SIZE] = {1, 2, 3, 4, 10};
    int flag_same = 1;

    for (i = 0; i < SIZE; i++) {
        if (a[i] != b[i]) {
            flag_same = 0; 
            printf("배열 값이 다른 인덱스: %d\n", i);
        }
    }

    if (flag_same == 1) {
        printf("배열은 같은 값을 가집니다.\n");
    }

    return 0;
}
