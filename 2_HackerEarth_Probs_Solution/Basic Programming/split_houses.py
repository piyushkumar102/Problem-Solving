n = int(input())
grid = input()
grid = grid.replace('.', 'B')
if'HH' in grid:
    print('NO')
else:
    print('YES')
    print(grid)
