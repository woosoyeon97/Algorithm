from collections import deque
q = deque()
m, n, k = list(map(int, input().split(' ')))
box = [[0] * m for _ in range(n)] #색칠한 직사각형을 배열로 나타냄
check = [[0] * m for _ in range(n)]
cntL = []
dx = [1, -1, 0, 0]
dy = [0, 0, 1, -1]

def dfs(x, y):
    q.append([x, y])
    check[x][y] = 1
    cnt = 1
    while q:
        x, y = q.popleft()
        for i in range(4):
            nx = dx[i] + x
            ny = dy[i] + y
            if 0 <= nx < n and 0 <= ny < m:
                if check[nx][ny] == 0 and box[nx][ny] == 0:
                    check[nx][ny] = 1
                    q.append([nx, ny])
                    cnt += 1
    cntL.append(cnt)

for temp in range(k):
    x1, y1, x2, y2 = list(map(int,input().split(' ')))
    for i in range(x1, x2):
        for j in range(y1, y2):
            box[i][j] = 1

for i in range(n):
    for j in range(m):
        if box[i][j] == 0 and check[i][j] == 0:
            dfs(i, j)

cntL.sort()
print(len(cntL))
answer = ''
for i in cntL:
    answer += str(i)
    answer += ' '
print(answer)


