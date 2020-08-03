number = input()
q = int(number)
no = list(number)
div6 = []
if q % 6 == 0:
    div6.append(q)
for j, i in enumerate(no):
    n = no
    n.remove(n[j])
    n="".join(n)
    n = int(n)
    if (n % 6 == 0):
        div6.append(n)
div6i=[]
for i in div6:
    div6i.append(int(i))
print(max(div6i))
