def mergeSort(lst):
    if (len(lst)) > 1:
        mid = len(lst) // 2  # Middle Element
        l = lst[:mid]  # Left Elements to Middle
        r = lst[mid:]  # Right Elements to the Middle
        mergeSort(l)  # Left SubArray Partition repeatedly
        mergeSort(r)  # Right SubArray Partition repeatedly
        i = j = k = 0
        while i < len(l) and j < len(r):  # Combining Right and Left SubArray
            if l[i] < r[i]:
                lst[k] = l[i]
                i += 1
            else:
                lst[k] = r[j]
                j += 1
            k += 1
        while i < len(l):
            lst[k] = l[i]
            i += 1
            k += 1


lst = []  # Create a list
n = int(input())
for x in range(0, n):
    y = int(input())
    lst.append(y)
print(lst)
mergeSort(lst)  # Sorting takes place
print(lst)
