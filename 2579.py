n = int(input())
a = []
for i in range(n):
    a.append(int(input()))
res = [a[0]]
if n < 3:
    if n == 2:
        res.append(a[0] + a[1])
else:
    third = max(a[0] + a[2], a[1] + a[2])
    second = a[0] + a[1]
    res = [a[0], second, third]
    for i in range(3, n):
        maxnum = max(res[i - 3] + a[i - 1] + a[i], res[i - 2] + a[i])
        res.append(maxnum)

print(res[n - 1])



