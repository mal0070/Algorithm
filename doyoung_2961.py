'''
sour = S의 곱
bitter = B의 합
절댓값 (sour - bitter) 최소로 min
'''
import sys
from itertools import combinations 

n = int(input())
sour = []
bitter = []

for _ in range(n):
    S, B = map(int, input().split()) #입력받기
    sour.append(S)
    bitter.append(B)

result = float('inf') #양의 무한대, 어떤 수도 이보다 클 수 없다.

for i in range(1, n+1):
    pick = list(combinations(list(range(n)), i)) #1~n개 뽑는 경우의 수
    
    for food in pick: #경우 하나씩 탐색
        s = 1
        b = 0
        
        for j in range(i): #i개 뽑는 경우
            s *= sour[food[j]]
            b += bitter[food[j]]
            
        if abs(s-b) < result: #범위 지정 위해! 즉 무한정으로 연산가능
            result = abs(s-b)
            
print(result)
        

    




