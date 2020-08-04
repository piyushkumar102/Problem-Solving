n = int(input())
for i in range(n):
    string = input()
    string1, string2 = string.split()
    if(sorted(string1) == sorted(string2)):
        print("YES")
    else:
        print("NO")
