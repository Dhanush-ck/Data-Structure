# Function to return Fibonacci series
# Takes in a single parameter (n)
# Returns n if n is 0 or 1
# Otherwise call function again with values n-1 & n-2
def fibonacci(n):
    if(n == 0 or n == 1):
        return n
    else:
        return fibonacci(n-1) + fibonacci(n-2)


# Reading limit from the user
# Here limit is the count of member in Fibonacci series
limit = int(input("Enter the limit : "))
# Checks if the limit is positive or not
# If positive calls function for 'limit' times
# Otherwise gives an error message
if(limit < 0):
    print("Enter positive limit!")
else:
    for i in range(limit):
        print(fibonacci(i))