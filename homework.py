#5597
n = [i for i in range(1,31)]  #미리 1번~30번 리스트 만들고

for _ in range(28):
    n.remove(int(input())) #제거
n.sort() #오름차순 정렬
print(*n, sep = "\n") #리스트 풀기
