'''
한수 x = 각 자리가 등차수열
입력 n
for i in range(1,n+1)
    x
출력 x의 개수 
'''

n = int(input())
cnt = []

#세자리 일 때만 한수 판별하면 됨(두자리수 이하는 모두 등차수열)
def hann(n):
    if (x >=100): 
        n = str(n) #파이썬은 문자열 인덱싱
        if int(n[2])-int(n[1])==int(n[1])-int(n[0]):
            return 1
        else:
            return 2 #해당x
    else:
        return 3

for x in range(1, n+1):
   re = hann(x)
   if re == 1 or re == 3 :
       cnt.append(x)
   
result = len(cnt)
print(result)