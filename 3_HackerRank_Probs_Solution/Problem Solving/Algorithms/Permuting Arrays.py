t = int(input())
for i in range(t):
    flag = 0
    n, k = map(int, input().split())
    A = list(map(int, input().split()))
    B = list(map(int, input().split()))
    print('YES' if all(a + b >= k for a,
                       b in zip(sorted(A, reverse=True), sorted(B))) else 'NO')
