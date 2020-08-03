x = input()
x = x.split()
x1 = [int(i) for i in x]
n = input()
n = n.split()
y = [int(i) for i in n]
y = sorted(y)
for i in range(x1[1]):
    print(y[i], end=" ")
for i in range(x1[0]-1, x1[1] - 1, -1):
    print(y[i], end=" ")
