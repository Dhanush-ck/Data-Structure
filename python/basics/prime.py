n = int(input("Enter a number : "))
count = 0
if(n < 0):
    print("Enter a positive number!")
else:
    for i in range(1, n+1):
        if(n % i == 0):
            count += 1
        if(count > 2):
            break
    if(count == 2):
        print(f"{n} is a prime number")
    else:
        print(f"{n} is not a prime number")