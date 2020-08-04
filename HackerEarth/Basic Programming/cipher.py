s = input()
t = int(input())
k = t
out = ""
for i in s:
    if i.isalnum():
        if i.isupper():
            k %= 26
            if ord(i)+k > ord('Z'):
                out += chr(ord('A')+ord(i)+k-ord('Z')-1)
            else:
                out += chr(ord(i)+k)
            k = t
        elif i.islower():
            k %= 26
            if ord(i)+k > ord('z'):
                out += chr(ord('a')+ord(i)+k-ord('z')-1)
            else:
                out += chr(ord(i)+k)
            k = t
        elif i.isnumeric():
            k %= 10
            if int(i)+k > 9:
                out += str(int(i)+k-10)
            else:
                out += str(int(i)+k)
            k = t
    else:
        out += i
print(out)
