string1 = input()
string2 = input()
for i in range(0, len(string1)):
    if(string1[i] == string2[i]):
        if(string1[i] == 'W'):
            print("B", end="")
        elif(string1[i] == 'B'):
            print("W", end="")
    else:
        print("B", end="")
