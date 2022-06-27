dx = [0,0,-1,1]
dy = [-1, 1, 0, 0]
arr = [ 1,2,3,4,5]
for x in range(len(arr)):
    for y in range(len(arr[x])):
        for i in range(4):
            testX = x+dx[i]
            testY = y+dy[i]
            print(arr[testX][testY])