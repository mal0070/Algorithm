#2615

'''
1. 19*19 입력을 받는다.
2. 바둑알이 있는 값을 확인한다. arr[x][y]
3. ↓ ↘ → ↗ 순으로 탐색  -> 움직일 수 있는 좌표를 리스트로 저장해 놓고 풀기(bfs 너비우선탐색처럼)
3. 현재 값과 다음 값이 연속으로 있는지 확인 (while문)
4. 6개 연속인지 확인하고
5. cntm == 5이면 return
6. 승부 나지 x -> 0 return
'''

arr = []
for i in range(19): #행의 수
    arr.append(list(map(int, input().split()))) #2차원 리스트 입력 - arr에 한 리스트 씩 append

dx = [1, 1, 0, -1]
dy = [0, 1, 1, 1]

def omock():
    for x in range(19):
        for y in range(19):
            if arr[x][y]:
                for i in range(4):
                    nx = x + dx[i]
                    ny = y + dy[i]
                    cnt = 1
                    
                    if nx < 0 or ny < 0 or nx >= 19 or ny >= 19:
                        continue
                    
                    while 0<= nx < 19 and 0<= ny <19 and arr[x][y] == arr[nx][ny]:
                        cnt += 1
                        
                        if cnt == 5:
                            if 0 <= nx+dx[i] <19 and 0<= ny+dy[i] < 19 and arr[nx][ny] == arr[nx + dx[i]][ny + dy[i]]:  # 육목 판정 1 : 제일 마지막 좌표와 그 다음 좌표가 같은지
                                break
                            if 0 <= x - dx[i] < 19 and 0 <= y - dy[i] < 19 and arr[x][y] == arr[x - dx[i]][y - dy[i]]:  # 육목 판정 2 : 제일 처음 좌표와 그 전 좌표가 같은지
                                break
                            return arr[x][y], x+1, y+1  # 육목이 아닌 오목이면 return
                        
                        nx += dx[i]
                        ny += dy[i]
    return 0,-1,-1 #승부가 나지 않을 때

color, x, y = omock()
if not color:
    print(color)
else:
    print(color)
    print(x,y)