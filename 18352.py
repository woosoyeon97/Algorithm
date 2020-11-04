from collections import deque
import sys
n, m, k, x = map(int,sys.stdin.readline().split())
q = deque()
graph = [[] for _ in range(n + 1)]
answer = []

for i in range(m):
    nx, ny = map(int,sys.stdin.readline().split())
    graph[nx].append(ny)

distance = [-1] * (n + 1)
distance[x] = 0

def dfs(x):
    q.append(x)
    while q:
        p = q.popleft()
        for j in graph[p]:
            if distance[j] == -1:
                distance[j] = distance[p] + 1
                q.append(j)

dfs(x)

for i in range(1, n + 1):
    if distance[i] == k:
        answer.append(i)

if len(answer) == 0:
    print(-1)
else:
    answer.sort()
    for i in answer:
        print(i)


