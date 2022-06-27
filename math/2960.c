#include <stdio.h>
#include <math.h>

#define SIZE 201

int main(void)
{
    int a[SIZE] = { 0 };	// 0 ~ 200
    int i, j;

    for(i = 2; i <= sqrt(SIZE); i++) {	// 최대값의 제곱근까지 반복
        if(a[i] == 0) {		//i가 소수이면
            for(j = 2; i * j < SIZE; j++) {	// 자신을 제외한 i의 배수 제거
                a[i * j] = 1;
            }
        }
    }

    for(i = 2; i < SIZE; i++) {
        if(a[i] == 0) printf("%d\n", i);
    }

    return 0;
}