n = input()
n = n.split()
y = [int(i) for i in n]
for i in range(y[0], y[1]+1):
    x = int(i)
    x = str(x)
    if (x == x[::-1]):
        print(x)
