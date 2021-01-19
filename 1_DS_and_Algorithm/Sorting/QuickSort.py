def quickSort(lst, low, up):
    if low < up:
        pi = partition(lst, low, up)
        print("QS: Pi", pi)
        quickSort(lst, low, pi - 1)  # Elements less than Pivot
        quickSort(lst, pi + 1, up)  # Elements Greater than Pivot


def partition(lst, low, up):
    i = low - 1
    pivot = up
    for j in range(low, up):
        if lst[j] <= lst[pivot]:  # If element is less than pivot
            i = i + 1
            lst[i], lst[j] = lst[j], lst[i]  # Swap them and increment i
    lst[i + 1], lst[up] = lst[up], lst[i + 1]  # Swap Pivots original position
    return i + 1


lst = []
n = int(input())
for x in range(0, n):
    y = int(input())
    lst.append(y)
print(lst)
quickSort(lst, 0, n - 1)  # List,Starting Index, Pivot Element
print(lst)
