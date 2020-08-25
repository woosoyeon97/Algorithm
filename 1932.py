n = int(input())
a = []

cnt = 1
for i in range(0, n):
    temp = []
    temp = list(map(int, input().split(' ')))
    a.append(temp)

maxnum = -1
for j in range(1, n):
    a[j][0] += a[j - 1][0]
    a[j][cnt] += a[j - 1][cnt - 1]
    for p in range(1, cnt):
        a[j][p] += max(a[j - 1][p - 1], a[j - 1][p])
    cnt += 1

for k in a[n - 1]:
    if maxnum < k:
        maxnum = k

print(maxnum)