print(*(lambda s: sorted(range(1, len(s) + 1), key=lambda i: s[i - 1]))(
    tuple(sum(map(int, input().split())) for _ in range(int(input())))))
