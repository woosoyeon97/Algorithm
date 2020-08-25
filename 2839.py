n = int(input())
cnt = 0
while 1:
    if n % 5 == 0:
        cnt += (n / 5)
        cnt2 = int(cnt)
        print(cnt2)
        break
    elif n < 3:
        print("-1")
        break
    elif n == 0:
        cnt2 = int(cnt)
        print(cnt2)
        break
    else:
        n = n - 3
        cnt += 1
