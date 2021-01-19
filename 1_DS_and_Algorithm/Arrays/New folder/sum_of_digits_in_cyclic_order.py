number = input()
number = list(number)
num = [int(i) for i in number]
sum = 0
for i in range(len(num)):
    for j in range(i, len(num)):
        sum = sum+num[j]
print(sum)
