def factorial(n):
    if(n == 0 or n == 1):
        return 1
    else:
        return n * factorial(n - 1)
x = int(input("Enter the number : "))
if(x < 0):
    print("Enter a positive number!")
else:
    print(f"{x}! = {factorial(x)}")