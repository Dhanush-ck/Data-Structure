# casefold() - Used to convert the string to lowercase
# It'll convert if there is any uppercase character present in the string to lowercase

# list() - Used to convert to list object

# reversed() - Used to reverse string, list, tuple
# It returns a reversed iterator, it is an object along with memory address shows where the object is stored
# Eg :- <reversed object at 0x0000021D8C3E9A00> 

# Reading a string 
original_string = input("Enter the string : ")
# Converting the string to complete lowercase
original_string = original_string.casefold()
# Reversing the string and storing it in a variable
reversed_string = reversed(original_string)
# Checking if the reversed string and string read from the user are same or not
# If they are same it'll show a message that the string palindrome
# Otherwise it'll show a message that the string is not palindrome
if( list(original_string) == list(reversed_string)):
    print("String is palindrome")
else:
    print("String is not palindrome")