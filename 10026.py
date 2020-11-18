from collections import deque
n = int(input())
a = [list(map(str, input())) for _ in range(n)]
dx = [1, -1, 0, 0]
dy = [0, 0, 1, -1]
check = [[0] * n for _ in range(n)]
q = deque()

def dfs(x, y):
    q.append([x, y])
    check[x][y] = 1
    while q:
        x, y = q.popleft()
        for i in range(4):
            nx = dx[i] + x
            ny = dy[i] + y
            if 0 <= nx < n and 0 <= ny < n:
                if a[x][y] == a[nx][ny] and check[nx][ny] == 0:
                    q.append([nx, ny])
                    check[nx][ny] = 1
cnt = 0
cnt2 = 0
for i in range(n):
    for j in range(n):
        if check[i][j] == 0:
            dfs(i, j)
            cnt += 1

check = [[0] * n for _ in range(n)]
for i in range(n):
    for j in range(n):
        if a[i][j] == 'G':
            a[i][j] = 'R'

for i in range(n):
    for j in range(n):
        if check[i][j] == 0:
            dfs(i, j)
            cnt2 += 1

print(cnt)
print(cnt2)