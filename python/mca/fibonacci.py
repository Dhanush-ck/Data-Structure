def fibonacci(n):
    a = 0
    b = 1
    if n >= 1:
        print(a, end=" ")
    if n >= 2: 
        print(b, end=" ")
    if n > 2:
        for i in range(n-2):
            a, b = b, a+b
            print(b, end=" ")

n = int(input("Enter the number: "))
if n<=0:
    print("Enter valid number")
else:
    print(f"{n} terms of fibonacci series: ", end="")
    fibonacci(n)