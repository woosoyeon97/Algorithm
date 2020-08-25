n = int(input())
cnt = 0
a = [0] * (n + 1)
if n == 1:
    print(0)
elif n == 2:
    print(1)
else:
    for j in range(2, n + 1):
        a[j] = a[j - 1] + 1
        if j % 2 == 0:
            two = int(j / 2)
            a[j] = min(a[j], a[two] + 1)
        if j % 3 == 0:
            three = int(j / 3)
            a[j] = min(a[j], a[three] + 1)
    print(a[n])