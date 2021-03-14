n, k = map(int, input().split())
prices = sorted(map(int, input().split()))
sum1 = 0
for i in prices:
    if (int(i) <= k):
        sum1 = 1+sum1
        k = k-i
    else:
        break
print(sum1)
