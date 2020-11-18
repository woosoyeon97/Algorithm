from collections import deque
q = deque()
check = [0] * 100001
x, y = list(map(int, input().split(' ')))

def dfs(nx):
    q.append(nx)

    while q:
        x = q.popleft()
        if x == y:
            return check[x]
        for j in (x+1, x-1, 2*x):
            if 0 <= j < 100001 and check[j] == 0:
                check[j] = check[x] + 1
                q.append(j)

print(dfs(x))
