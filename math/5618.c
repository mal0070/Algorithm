//공약수

/* 알고리즘
처음에는 2일 경우, 3일 경우 나누어 / 숫자 비교해서 / 최대공약수의 약수 구하는 방식 생각했었음
그러나 처리시간이 오래 걸려 컴파일이 되지 않았다.
==>> [1~입력받은 숫자 중 가장 작은 숫자]를 / n개의 수에 나누었을 때/ 나머지가 0인 숫자 출력
    1. n입력
    2. n개의 수 입력
    3. min 구하기
    4. i=1;i<=min;i++ 에서 arr[0~n]%i == 0 인 것만 출력
*/

#include <stdio.h>

int main(){
    int n;
    int arr[3]={0,0,0}; //2또는 3만 입력 가능하니까
    int i;

    printf("2또는 3을 입력하세요: ");
    scanf("%d", &n);
    
    //최솟값을 아무거나 지정하고, 하나씩 비교해서 최솟값 구함
    printf("자연수 입력: ");
    scanf("%d", &arr[0]); 
    int min = arr[0]; //코드 반복을 피하기 위해 공통적으로 꼭 들어가는 첫번째 수를 min으로 지정
 
    if(n==2)
        scanf("%d", &arr[1]);
    else if(n==3)
        scanf("%d %d", &arr[0], &arr[1]);
    else
        printf("잘못 입력하셨습니다 \n");
    
    for(i=1;i<n;i++){
            if(min>arr[i])
                min = arr[i];
    }
    //모든 수에 대입했을 때 나머지가 0인 숫자 출력
    for(i=1;i<=min;i++){
        if(arr[0]%i == 0 && arr[1]%i == 0 && arr[2]%i == 0)
            printf("%d ",i);
    }
    printf("\n");
    return 0;

}