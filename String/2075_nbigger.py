import sys
import heapq

n =int(sys.stdin.readline())
heap =  []

for _ in range(n):
    for n in map(int, sys.stdin.readline().split()):
        heapq.heappush(heap, n)
    heap = heapq.nlargest(n, heap) #nlargest: heap값중 제일 큰 n개의 값을 추출
heapq.heapify(heap)
print(heapq.heappop(heap))