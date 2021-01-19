lst = [int(i) for i in input().split()]
sum = 0
for i in lst:
    sum = sum+i
    if(i <= 2):
        flag = 1
if flag == 1:
    print("Failed")
else:
    if lst.__contains__(5):
        average = sum/5
        if average < 4:
            print("NO")
        else:
            print("Yes")
    else:
        print("NO")
