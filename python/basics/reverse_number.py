# Reading a number from the user
num = int(input("Enter the number : "))
# Creating a varible for the reversed number
reversed_num = 0
# Creating a loop which executes when num is greater than zero
while(num > 0):
    # Storing the remainder to variable 
    # Or in other words storing the last digit to a variable
    remainder = num % 10
    # Adding the remainder to the one's place of the reversed number
    # Adding remainder at the end if the reversed number variable
    reversed_num = (reversed_num * 10) + remainder
    # Dividing num by 10 to remove the last digit 
    # Last digit is added to the reversed number we want the next last number so we remove the last digit
    # // means floor division, division without floating point
    num = num // 10
# Prints the result
print(f"The reversed number is {reversed_num}")