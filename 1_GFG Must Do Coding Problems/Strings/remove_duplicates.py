n = input()
n = list(n)
distinct = []
for i in n:
    if i not in distinct:
        distinct.append(i)
print(*distinct)
