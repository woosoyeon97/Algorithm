n = int(input())
a = list(map(int, input().split()))
dp = [a[0]]
for i in range(1, n):
    dp.append(a[i])
    comp = dp[i - 1] + a[i]
    if comp > dp[i]:
        dp[i] = comp

max = a[0]
for i in range(n):
    if max < dp[i]:
        max = dp[i]

print(max)
