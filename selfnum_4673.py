'''
와 이거 알고리즘 공부 시작 최초로 거의 내 힘으로 풀었음!ㅜㅜㅜㅜㅜㅜ

n > 0 int
d(n) = n+ 각 자리수 더하는 함수
n은 d(n)의 생성자
셀프넘버 = 생성자가 없는 숫자
'''
n = 1
createnum = 0
remove_set = set() #set:집합
all_range = set(range(1, 10000))

def notselfnum(n):
        global createnum
        s = sum(map(int, str(n)))
        createnum = n+s
        return createnum

for n in all_range:  
    notselfnum(n)
    remove_set.add(createnum)

result_set = all_range - remove_set
for result in sorted(result_set):
    print(result)
