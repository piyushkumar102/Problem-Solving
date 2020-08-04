n = int(input())
numbers1 = []
x = input()
numbers = x.split()
for i in numbers:
    numbers1.append(int(i))
print(min(numbers1))
