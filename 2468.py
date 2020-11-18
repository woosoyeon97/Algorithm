from collections import deque
import sys
sys.setrecursionlimit(100000)
q = deque()
r = sys.stdin.readline
n = int(r())
a = [list(map(int, r().split(' '))) for _ in range(n)]
dx = [1, -1, 0, 0]
dy = [0, 0, 1, -1]
check = [[0] * n for _ in range(n)]

def dfs(x, y, h):
    q.append([x, y])
    check[x][y] = 1
    while q:
        x, y = q.popleft()
        for i in range(4):
            nx = dx[i] + x
            ny = dy[i] + y
            if 0 <= nx < n and 0 <= ny < n:
                if a[nx][ny] > h and check[nx][ny] == 0:
                    check[nx][ny] = 1
                    q.append([nx, ny])


maxH = 0
minH = 101
for i in range(n):
    maxL = max(a[i])
    minL = min(a[i])
    if maxH < maxL:
        maxH = maxL
    if minH > minL:
        minH = minL

cntL = []
for h in range(minH, maxH):
    check = [[0] * n for _ in range(n)]
    cnt = 0
    for i in range(n):
        for j in range(n):
            if check[i][j] == 0 and a[i][j] > h:
                dfs(i, j, h)
                cnt += 1
    cntL.append(cnt)

if len(cntL) == 0:
    cntL.append(1)

print(max(cntL))