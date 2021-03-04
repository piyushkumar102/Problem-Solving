# Sorting Problem
n = int(input())
arr = list(map(int, input().rstrip().split()))
arr = sorted(arr)
print(arr[int(len(arr) / 2)])
