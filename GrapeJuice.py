#2156
'''
3잔 연속 마시면 안됨
-> 인덱스 거꾸로 생각 (확통)
1. i-1잔을 안 마셨을 때: i-2까지의 최대값 + [i]
2. i-2잔을 안 마시고, i-1잔을 마셨을 때: i-3까지의 최댓값 + [i-1] + [i]
3. i-2잔 마시고, i-1잔도 마셨을 때 : i-1 까지의 최댓값
'''

n = int(input())
grape = [0] #값 추가 안했더니 indexerror남
for i in range(1,n+1):
    grape.append(int(input()))

dp = [0,grape[1]]
if n > 1: 
    dp.append(grape[1]+grape[2])  
    
for i in range(3,n+1):
    dp.append(max(dp[i-2]+grape[i], dp[i-3]+grape[i-1]+grape[i],dp[i-1]))
    
print(dp[n])