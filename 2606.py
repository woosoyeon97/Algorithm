from collections import deque
q = []
n = int(input())
m = int(input())
a = dict()
com = [[] for _ in range(n + 1)]
check = [0] * (n + 1)


def dfs(x):
    q.extend(com[x])
    check[x] = 1
    cnt = 0
    while q:
        nx = q.pop()
        if check[nx] == 0:
            q.extend(com[nx])
            check[nx] = 1
            cnt += 1

    return cnt

for i in range(m):
    x, y = list(map(int, input().split(' ')))
    com[x].append(y)
    com[y].append(x)

print(dfs(1))


