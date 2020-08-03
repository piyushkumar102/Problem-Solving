n = input()
number = int(n)

if (number >= 1 and number <= 9999):
    x = number
    x = str(x)
    y = x[::-1]
    if (x == x[::-1]):
        print(x)
    if (number < 1000):
        print("110\n220\n330\n440\n550\n660\n770\n880\n990")
        for i in range(number + 1, 10000):
            x = int(i)
            x = str(x)
            y = x[::-1]
            if (x == x[::-1]):
                print(x)
    else:
        for i in range(number + 1, 10000):
            x = int(i)
            x = str(x)
            y = x[::-1]
            if (x == x[::-1]):
                print(x)
