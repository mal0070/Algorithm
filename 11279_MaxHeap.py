#파이썬의 heapq : 최소힙 구현 -> 입력받는 값에 음수를 취해서 push & pop
# input() 시간초과 -> sys.stdlin.readline() 사용

import sys
import heapq

n=int(sys.stdin.readline())
heap = []

for _ in range(n): #언더스코어(_): 값을 무시하고 싶을 때. 즉 인덱스가 필요하지 않을 때
    x = int(sys.stdin.readline())
    
    if x == 0:
        try: 
            print(-1 * heapq.heappop(heap))
        except:
            print(0)
            
    else: 
        heapq.heappush(heap, -x) 