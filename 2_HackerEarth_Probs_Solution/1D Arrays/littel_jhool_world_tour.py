test = int(input())
for t in range(test):
    flag = 0
    inp = input()
    inp = inp.split()
    n, m = inp[0], inp[1]
    print(n, m)
    for i in range(m):
        maprange = input()
        maprange = maprange.split()
        start = maprange[0]
        end = maprange[1]
        temp = end
        if (start == temp):
            pass
        else:
            flag = 1
            print('NO')
    if (flag == 0):
        print("YES")
