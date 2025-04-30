# Function to return HCF (Highest Common Factor)
# Takes two parameters
# First find the smallest one from the parameters
# Then checks from 1 to the smallest number that is it divisble by both
# If divisible it is stored into a varible
# Variable is returned after the loop
def calculate_hcf(x, y) :
    if(x < y):
        smallest = x
    else:
        smallest = y
    for i in range(1, smallest+1):
        if(x % i == 0 and y % i == 0):
            hcf = i
    return hcf

# Reading first number from the user
x = int(input("Enter the first number : "))
# Reading second number from the user
y = int(input("Enter the second number : "))
# Prints HCF by calling the function
print(f"HCF = {calculate_hcf(x, y)}")