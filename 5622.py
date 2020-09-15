
a = ['ABC', 'DEF', 'GHI', 'JKL', 'MNO','PQRS','TUV', 'WXYZ']
n = input()
result = 0
for i in range(len(n)):
    for j in a:
        if n[i] in j:
            result = result + a.index(j) + 3
            # print(result)

print(result)
