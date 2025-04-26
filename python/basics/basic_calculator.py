def add(x, y):
    return x + y
def subtract(x, y):
    return x - y
def multiply(x, y):
    return x * y 
def divide(x, y):
    return x / y
def mod(x, y):
    return x % y

print("Select the operation : ")
print("1. ADD")
print("2. SUBTRACT")
print("3. MULTIPLY")
print("4. DIVIDE")
print("5. MODULUS")
ch = 'Y'
while(ch == 'y' or ch == 'Y'):
    choice = int(input("Enter the choice(1/2/3/4/5) : "))
    x = int(input("Enter the first number : "))
    y = int(input("Enter the second number : "))
    if(choice == 1):
        print(f"{x} + {y} = {add(x,y)}")
    elif(choice == 2):
        print(f"{x} + {y} = {subtract(x,y)}")
    elif(choice == 3):
        print(f"{x} * {y} = {multiply(x, y)}")
    elif(choice == 4):
        print(f"{x} / {y} = {divide(x, y)}")
    elif(choice == 5):
        print(f"{x} % {y} = {mod(x,y)}")
    else:
        print("Invalid operation!")
    ch = input("Do you want to continue?(Y/N) : ")