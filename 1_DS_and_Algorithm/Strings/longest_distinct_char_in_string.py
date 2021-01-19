n = input()
n = list(n)
distinct = []
count = 0
max_ = 0
for i in n:
    if i not in distinct:
        distinct.append(i)
        count = count + 1
        if (count > max_):
            max_ = count
    else:
        count = 0
        distinct.clear()
print(max_)
