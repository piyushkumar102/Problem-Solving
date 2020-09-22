test = int(input())
for i in range(test):
    flag = 0
    n = input()
    n = list(n)
    y = [int(i) for i in n]
    y = sorted(y)
    dup = 0
    for j in y:
        count = 0
        for k in range(len(y)):
            if(y[k] == j):
                count = count+1
            if(count > 1):
                dup = 1
                break
        if(dup == 1):
            break
    max = int(y[-1])
    min = int(y[0])
    for j in range(min, max+1):
        if (dup == 1):
            flag = 1
            break
        if j not in y:
            flag = 1
            break
    if(flag == 1):
        print("NO")
    else:
        print("YES")
