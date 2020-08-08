import sympy as s
n = int(input())
for i in range(n):
    prime = input()
    freq = {}
    for i in prime:
        if i in freq:
            freq[i] += 1
        else:
            freq[i] = 1
    for i in freq:
        if s.isprime(freq.get(i)):
            flag = 1
        else:
            flag = 0
            break
    if (flag == 0):
        print("NO")
    elif(flag == 1 and (len(freq).isprime())):
        print("YES")
