def fibonacci(n):
    if(n == 0 or n == 1):
        return n
    else:
        return fibonacci(n-1) + fibonacci(n-2)

limit = int(input("Enter the limit : "))
if(limit < 0):
    print("Enter positive limit!")
else:
    for i in range(limit):
        print(fibonacci(i))