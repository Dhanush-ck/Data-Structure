# Function to return factorial of a number
# Function takes a single parameter (n)
# Function returns 1 if the value of the parameter is 1 or 0
# Function  uses recursion method
def factorial(n):
    if(n == 0 or n == 1):
        return 1
    else:
        return n * factorial(n - 1)
    
# Reading number from the user
x = int(input("Enter the number : "))
# Check the number is positive or not
# If it is positive it'll call the function 
# Otherwise gives an error message
if(x < 0):
    print("Enter a positive number!")
else:
    print(f"{x}! = {factorial(x)}")