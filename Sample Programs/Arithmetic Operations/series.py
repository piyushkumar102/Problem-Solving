# 1-x+x2-x3+.....x^n

x = int(input())
n = int(input())
sum = 0
for i in range(0, n+1):
    if(i % 2 == 0):
        sum = sum+pow(x, i)
    else:
        sum = sum-pow(x, i)
print(sum)
