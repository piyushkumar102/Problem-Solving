# reverse the whole string without reversing the individual words in it.
#  Words are separated by dots.
n = input()
n = n.split(".")
temp = []
for i in range(0, len(n)):
    temp.append(n[(len(n) - 1) - i])
print(*temp)
