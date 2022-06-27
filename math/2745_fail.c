//B진법 수를 10진법으로 변환

/* 알고리즘
    scanf N B 
    N을 자릿수대로 나누어야함 -> string로 저장
    1. 아스키코드 변환
    2. 진법변환: 각각 숫자들에 B의 0제곱 ~ B의 마지막 제곱

    length = sizeof(string)/sizeof(int)
    for(i=0;i<length;i++)
        i) 0<=char[i]<=9 
            아스키코드 변환
            진법변환
        ii) 65<=char[i]<90 :A~ Z는 아스키코드로 65~90
            아스키코드 변환
            진법변환
*/

#include<stdio.h>
int main(){
    char N[10000];
    int B=0;
    int length=0; 
    int result = 0;
    int num = 1;

    for(int i=0;i<100;i++){
        scanf("%c", &N[i]);
        if(N[i]==' ')
            break;
        length++;
    }
    scanf("%d", &B);

    for(int i=0;i<length;i++){
        if (65<= N[i] && N[i]<=90)
            result += (N[i]-55)*num; //숫자*자릿수
        else
            result += (N[i]-48)*num;
        num = num*B;
    }
    printf("%d \n", result);
    return 0;
}   ///런타임에러