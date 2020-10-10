alphabet = [0] * 26
S = input()
sorted_S = sorted(S)
for i in sorted_S:
    index = ord(i) - 97
    alphabet[index] += 1

for j in alphabet:
    print(j)