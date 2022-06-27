#include<stdio.h>

int main(){
    int a = 3;
    
    int b = a++;
    int c = ++a;
    
    printf("%d \n", b);
    printf("%d \n", c);
    return 0;
}