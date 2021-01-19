string1 = input()
string2 = input()
string1 = sorted(string1)
string1 = str(string1)
string2 = sorted(string2)
string2 = str(string2)
if string1 == string2:
    print("Strings are anagrams of each other")
else:
    print("Strings are not anagrams of each other")
