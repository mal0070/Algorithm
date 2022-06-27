//최대공약수와 최소공배수

/* 알고리즘
[유클리드 호제법: 2개의 자연수 a,b(a>b)에 대해서 a를 b로 나눈 나머지가 r일 때
a와 b의 최대공약수는 b와 r의 최대공약수와 같다.] -> r이 0이 되는 값이 최대공약수이다.

자연수 a,b 입력받음
a,b 크기 비교해서
작은 거로 나눔 (r이 0이 될 때 까지 반복)
최대공약수: r이 0이 되는 t
최소공배수: r이 0이 되는 순간 a*b/t
*/

/* #include <stdio.h>
int a;
int b;

int main(){
    scanf("%d %d", &a, &b);

    int lcm; //최소공배수
    int gcd;   //공약수를 저장할 변수
    int small;
    small = (a<b)?a:b;  //둘 중 작은 수를 small에 저장

    for(int i=0; i<=small; i++){
        if (a%i==0 && b%i==0)
             gcd = i;
    }
    lcm = (a*b) / gcd;    //최소공배수 = 두수의 곱/최대공약수 //divison by zero error
    printf("최대공약수: %d \n", gcd);
    printf("최소공배수: %d \n", lcm); */
    
    #define _CRT_SECURE_NO_WARNINGS
    #include <stdio.h>

    int get_gcd(a, b){
        int r = a % b;
        
        if(r == 0) //나머지가 0이라면
            return b; 
            //gcd(a,b)=gcd(b,r)
        else
            return get_gcd(b,r);
    }
    
    int main(){
        int a;
        int b;
        int gcd;
        int lcm;

        scanf("%d %d", &a, &b);

        gcd = get_gcd(a,b);
        lcm = (a*b)/gcd;

        printf("%d\n%d", gcd, lcm);

        return 0;
    }



