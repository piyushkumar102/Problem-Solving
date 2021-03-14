lst = list(map(int, input().split()))
n = list('abcdefghijklmnopqrstuvwxyz')
inp = list(input())
maxi = 0
for i in inp:
    height = lst[n.index(i)]
    if height > maxi:
        maxi = height
print(maxi*len(inp))
