'''
n장의 카드, 숫자 M
M을 넘지 않는 범위에서 n장의 카드 중 3장의 카드를 골라 그 합이 숫자 M에 최대한 가깝게
출력: 그 합

입력 N, M
while i < N :
    cardnum []
    cardnum.append(input())
    i++
while sum < M: 
    cardnum 의 원소에 대한 모든 합(sum)의 경우의 수 탐색 [브루스포스 알고리즘]

출력 sum
'''

N, M = map(int, input().split())
cardnum = list(map(int, input().split()))
sum = 0

for i in range(N):
    for j in range(i+1, N):
        for k in range(j+1, N):
            if (cardnum[i]+cardnum[j]+cardnum[k] > M):
                continue
            else:
                sum = max(sum, cardnum[i]+cardnum[j]+cardnum[k])
                
print(sum)