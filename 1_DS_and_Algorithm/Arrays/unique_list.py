lst = input()
lst = lst.split()
unique = []
for i in lst:
    if i in unique:
        pass
    else:
        unique.append(i)
print(*unique)

# OP: Array consisting of Distinct Elements



