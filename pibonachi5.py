#10870
'''
0 1 0+1 1+(0+1)  -> f[n] = f[n-1]+f[n-2] n>=2
'''
n = int(input())
f = [0,1]

for i in range(2, n+1):
    num = f[i-1]+f[i-2]
    f.append(num)

print(f[n])
