n = int(input())
podo = []
for i in range(n):
    temp = int(input())
    podo.append(temp)
dp = [0] * (n + 1)
dp[0] = podo[0]
if n > 1:
    dp[1] = podo[0] + podo[1]
    if n > 2:
        dp[2] = max(podo[0] + podo[2], podo[1] + podo[2])
        dp[2] = max(dp[1], dp[2])
for i in range(3, n):
    dp[i] = max(dp[i - 2] + podo[i], dp[i - 3] + podo[i - 1] + podo[i])
    dp[i] = max(dp[i - 1], dp[i])

print(dp[n - 1])
