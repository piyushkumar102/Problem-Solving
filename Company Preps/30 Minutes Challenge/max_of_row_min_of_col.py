# Let ri denote the minimum value in the i-th row, and let Ci denote the maximum value in the i-th column. A grid is called nice if and only if the following condition holds true:
# max(r1, r2, ..., rN) = min(C1, C2, ..., CN)
n = int(input())
mat = []
min_of_row = []
max_of_col = []
for i in range(n):
    r = []
    for j in range(n):
        r.append(int(input()))
    min_of_row.append(min(r))
    mat.append(r)
for i in range(n):
    max_val = 0
    for j in range(n):
        if mat[j][i] > max_val:
            max_val = mat[j][i]
    max_of_col.append(max_val)
if (min(max_of_col) == max(min_of_row)):
    print("The " + str(n) + " Square grid is nice.")
else:
    print("The " + str(n) + " Square grid is not nice.")
