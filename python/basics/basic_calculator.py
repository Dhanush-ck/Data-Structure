# The below 5 are functions which take two paramteres x & y

# Function to return sum of two numbers 
def add(x, y):
    return x + y

# Function to return difference of two numbers
def subtract(x, y):
    return x - y

# Function to return product of two numbers
def multiply(x, y):
    return x * y 

# Function to return result of dividing one number by another
def divide(x, y):
    return x / y

# Function to return remainder after dividing one number by another
def mod(x, y):
    return x % y

# ch is a loop control variable
ch = 'Y'
# Loop to continue process according to the user's choice
while(ch == 'y' or ch == 'Y'):
    # Print choices to the user for selecting one
    print("Select the operation : ")
    print("1. ADD")
    print("2. SUBTRACT")
    print("3. MULTIPLY")
    print("4. DIVIDE")
    print("5. MODULUS")
    # Reading user's choice
    choice = int(input("Enter the choice(1/2/3/4/5) : "))
    # Reading first number
    x = int(input("Enter the first number : "))
    # Reading second number
    y = int(input("Enter the second number : "))
    # Calling function according to user's choice
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
    # Updating value of ch with value from the user
    # Loop continues if the ch = 'y'/'Y'
    # Loop ends when ch is not 'y'/'Y'
    ch = input("Do you want to continue?(Y/N) : ")