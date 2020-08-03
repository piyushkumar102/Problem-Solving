x=int(input())
n = input()
n = n.split()
y = [int(i) for i in n]
n = sorted(y)
print(n[-2])