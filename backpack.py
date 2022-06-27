#12865
'''
물건 개수 n개
i = w + v
w <= K, v의 최댓값
'''

n, k = map(int, input().split())
dp = [[0]* (k+1) for _ in range(n+1)]  
bag = [[0,0]]

for _ in range(n):
    bag.append(list(map(int, input().split())))

for i in range(1, n+1):
    for j in range(1, k+1):
        w = bag[i][0]
        v = bag[i][1]
        
        if j < w:
            dp[i][j] = dp[i-1][j]
        else:
            dp[i][j]= max(dp[i-1][j], dp[i-1][j-w]+v)

print(dp[n][k]) #최댓값