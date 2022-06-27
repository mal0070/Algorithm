//피로도

/* 알고리즘
피로도 = 0

일한다 
피로도+A, 일+B
  
쉰다
피로도-C
if 피로도 <0 => 피로도=0

하루 = 24시간 -> 일한다
if 피로도 > M
    처리한 일--
    쉰다 ++
print 처리한 일
*/

#include <stdio.h>

int main(){
    int A,B,C,M;
    int fatigue = 0;
    int work = 0;
    printf("일피로도 일처리 휴식피로도 피로도최대치 \n");
    scanf("%d %d %d %d", &A, &B, &C, &M);
    
    if (A > M)
        printf("0 \n");

    else{
        for(int hr=0;hr<24;hr++){
        /*fatigue += A;
        work += B;
        if(fatigue > M){
            fatigue -=C;
             if (fatigue<0) 
                    fatigue = 0;
        }*/
            if (fatigue < M){    //*****처음부터 조건 안에 넣어주어야 한다
                fatigue += A;
                work += B;
            }
            else{
                fatigue -= C;
                if(fatigue<0)
                    fatigue = 0;
             }
    }
        printf("하루에 최대 %d 만큼 일할 수 있다. \n", work);
        return 0;
    }
}