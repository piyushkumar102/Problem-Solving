n = int(input())
n1 = n
for i in range(n):
    print(i + 1, end=" ")
for j in range(n - 1, 1, -1):
    print("\n"+(" " * (n)) + str(j), end=" ")
    n = n - 2
count = 0
for i in range(n1):
    count = count + 1
    if (count == 1):
        print("\n" + str(i + 1), end=" ")
    else:
        print(str(i + 1), end=" ")
