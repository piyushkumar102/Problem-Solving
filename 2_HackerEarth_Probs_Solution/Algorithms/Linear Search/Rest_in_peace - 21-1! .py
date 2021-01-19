t = int(input())
for i in range(t):
    number = input()
    if(('21' in number) or (int(number) % 21 == 0)):
        print('The streak is broken!')
    else:
        print('The streak lives still in our heart!')
