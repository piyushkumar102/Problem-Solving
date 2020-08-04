def fibonacci(n):
    a = 0
    b = 1
    if n < 0:
        print("Incorrect")
    elif(n == 0):
        return a
    elif(n == 1):
        return b
    else:
        for i in range(2, n):
            c = a+b
            a = b
            b = c
        return b


def main():
   # n = int(input())
    print(fibonacci(10))


if __name__ == '__main__':
    main()
