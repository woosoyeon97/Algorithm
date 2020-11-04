from collections import deque
n = int(input())
a = [list(map(int, input())) for _ in range(n)]
c = [[0] * n for _ in range(n)]
q = deque()
dx = [1, -1, 0, 0]
dy = [0, 0, 1, -1]
cnt = []
def bfs(x, y):
    temp = 0
    q.append([x, y])
    c[x][y] = 1
    temp += 1
    while q:
        x, y = q.popleft()
        for i in range(4):
            nx = x + dx[i]
            ny = y + dy[i]
            if 0 <= nx < n and 0 <= ny < n:
                if c[nx][ny] == 0 and a[nx][ny] == 1:
                    q.append([nx, ny])
                    c[nx][ny] = 1
                    temp += 1
                    # print(temp)
    cnt.append(temp)

for i in range(n):
    for j in range(n):
        if c[i][j] == 0 and a[i][j] == 1:
            bfs(i, j)
cnt.sort()
print(len(cnt))
for k in cnt:
    print(k)

