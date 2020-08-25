n = int(input())
a = [1, 1, 2]
if n > 3:
    for i in range(3, n):
        temp = a[i - 1] + a[i - 2]
        a.append(temp)
print(a[n - 1])