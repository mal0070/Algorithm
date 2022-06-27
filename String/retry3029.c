//경고

/* 알고리즘
hh:mm:ss (0<=hh<=23 59>=mm>=0 59>=ss>=0 )
입력 현재시간
입력 나트륨 던질 시간
출력 정인이가 기다려야하는 시간 - 최소 1초 최대 24시간


1) 던질 시간 > 현재시간
기다려야하는 시간 = 던질 시간 - 현재 시간
2) 던질시간 < 현재시간
    1>  던질 hh < 현재 hh : 던질 hh+24 - 현재
    2>  던질 mm < 현재 mm : 던질 mm+60
    3>  던질 ss < 현재 ss : 던질 ss+60
3) 던질시간 = 현재 시간 -> 24
*/

#include <stdio.h>
#include <stdlib.h>
//atoi(문자열); -> ASCII string to integer    ->진법변환 문제와 연결
//int atoi(char const *_String);
//성공하면 변환된 정수를 반환, 실패하면 0을 반환

int change(char c1, char c2){
    
    int x = 0;
    if(c1 == '0')
        x = c2 - '0';
    else
        x = (c1-'0')*10 + (c2-'0');
    
    return x;
}

int main(){

    char curTime[9], nextTime[9]; //00:00:00 문자열로 저장
    scanf("%s", curTime);
    scanf("%s", nextTime);

    int cur_h = change(curTime[0], curTime[1]);
    int cur_m = change(curTime[3],curTime[4]);
    int cur_s = change(curTime[6], curTime[7]);

    int next_h = change(nextTime[0], nextTime[1]);
    int next_m = change(nextTime[3], nextTime[4]);
    int next_s = change(nextTime[6], nextTime[7]);  //char -> int

    int wait_h;
    int wait_m;
    int wait_s;

if (cur_h == next_h && cur_m == next_m && cur_s == next_s)
    printf("24:00:00 \n");
else{
    if(cur_h > next_h){
        next_h = next_h + 24;
    }
    wait_h = next_h - cur_h;

    if(cur_m > next_m){
        next_m += 60;
        next_h -= 1;
    }
    wait_m = next_m - cur_m;

    if(cur_s > next_s){
        next_s += 60;
        next_m -= 1;
    }
    wait_s = next_s - cur_s;

    }
    if (wait_h <10)
        printf("0");
    printf("%d :", wait_h);

    if(wait_m<10)
        printf("0");
    printf("%d :", wait_m);

    if(wait_s<10)
        printf("0");
    printf("%d \n", wait_s);
    
    return 0;

} 