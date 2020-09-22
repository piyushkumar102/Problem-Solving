num = []
for i in range(10):
    num.append(input())
unique = []
for i in range(10):
    if num[i] not in unique:
        unique.append(num[i])
    if (num.count(num[i]) > 8):
        print("Poorest Player")
        break
    elif (num.count(num[i]) > 7):
        print("Worst Player")
        break
    elif (num.count(num[i]) > 4):
        print("Average Player")
        break
    elif (num.count(num[i]) > 2):
        print("Good Player")
        break
    elif (len(unique) == len(num)):
        print("Clever Player")
