brackets = input()
length = len(brackets)
brackets = list(brackets)
l = brackets.count('{')
r = brackets.count('}')
sum = 0
if (length % 2 == 1):
    sum = -1
elif (l == r):
    pass
else:
    sum = 1
print(sum)
