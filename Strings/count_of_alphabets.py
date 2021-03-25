string = input()
letters = list(string)
unique = []
for i in letters:
    if i not in unique:
        unique.append(i)
for i in unique:
    print(i+'-'+str(letters.count(i)), end=" ")
