import sys
import heapq

n=int(sys.stdin.readline())
heap = []

for i in range(n):
    x = int(sys.stdin.readline())
    
    if x !=0:
        heapq.heappush(heap, (abs(x),x)) #(절댓값, 원래값)
    else:
        if not heap: #heap에 없을 때
            print(0)
        else:
            print(heapq.heappop(heap)[1]) #heap은 [1]부터 저장 
        