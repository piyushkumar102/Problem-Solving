zoo = input()
zoo = list(zoo)
count = 0
for z in zoo:
    if(z == 'z'):
        count = count+1
count = count*2
for o in zoo:
    if(o == 'o'):
        count = count-1
if(count == 0):
    print("Yes")
else:
    print("No")
