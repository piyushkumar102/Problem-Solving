import sympy
t=int(input())
for i in range(t):
    n=input()
    char=n[i]
    asc=ord(char)
    if sympy.isprime(asc):
        