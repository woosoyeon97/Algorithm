n = 1
m = 1
while 1:
    call = []
    n, m = list(map(int, input().split(' ')))
    if n * m == 0:
        break
    for i in range(n):
        a, b, c, d = list(map(int, input().split(' ')))
        call.append((c, c + d))
    call.sort()
    for j in range(m):
        e, f = list(map(int, input().split(' ')))
        count = 0
        start = e
        end = e + f
        for k in call:
            if k[0] < end and k[1] > start:
                count += 1
        print(count)


