import math
shape = input()
shape = shape.split()
if (shape[0] == 'S'):
    print("Area of Square : {:.2f}".format(int(shape[1])*int(shape[1])))
elif shape[0] == 'C':
    print("Area of Circle : {:.2f}".format(
        float(math.pi*(int(shape[1]) ** 2))))
else:
    print("Invalid")
