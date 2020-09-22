import time
num = int(input())
first_num = int(num)
count = 0
print(len(str(num)))

if(len(str(num))>=4):
    while (1):
        num = num ** 2
        num = str(num)
        zeros = abs(len(num) - 8)
        add_zeros = ['0' for i in range(zeros)]
        num = list(num)
        if (len(num)) < 8:
            add_zeros.extend(num)
            num = add_zeros
        num = num[2:6]
        num = ''.join(num)
        num = [int(i) for i in num]
        num = [str(i) for i in num]
        num = "".join(num)
        num = int(num)
        count = count + 1
        time.sleep(1)
        if (first_num == num):
            print(count)
            break
