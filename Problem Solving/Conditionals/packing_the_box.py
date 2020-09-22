n = input()
n = n.split()
num = [int(i) for i in n]
n = num
count = 1
for i in range(len(n)-1):
    if n[i] * 2 == n[i + 1]:
        pass
    else:
        count = count + 1
print(count)
