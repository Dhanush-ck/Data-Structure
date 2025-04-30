# Reading a number from the user
n = int(input("Enter a number : "))
count = 0
# Checks if the entered number is negative or not
# If negative shows an error message
# Else run the prime checking part
if(n < 0):
    print("Enter a positive number!")
else:
    # In this loop we checks the divisible of the number with numbers from 1 till number
    # Breaks and get out of the loop if the count becomes greater than 2
    for i in range(1, n+1):
        if(n % i == 0):
            count += 1
            if(count > 2):
                break
    # If the count is 2, that is divisible 1 and that number only then it is prime number 
    # Otherwise the nummber is not prime
    if(count == 2):
        print(f"{n} is a prime number")
    else:
        print(f"{n} is not a prime number")