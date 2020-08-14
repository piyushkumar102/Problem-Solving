string = input()
string = list(string)
count = 0
cut = 0
unique=[]
for i in string:
    if i in unique:
        pass
    else:
        unique.append(i)
if len(unique) == len(string):
    print(len(unique) - 1)
else:
    for i in range(len(string)):
        org = string[0:i + 1]
        org2=string[i+1:len(string)+1]
        org = "".join(org)
        org2 = "".join(org2)
        cut=cut+1
        if (org == org[::-1]) and (org2 == org2[::-1]):
            count=count+1
            print(count)
            break

