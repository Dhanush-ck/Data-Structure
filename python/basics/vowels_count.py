# fromkeys() function returns the dictionary with key mapped and specific value
# It creates a new dictionary from the given sequence with the specific value

# Creating a string containing vowels
vowels = 'aeiou'
# Reading string
string = input("Enter the string : ")
# Converting to lowercase
string = string.casefold()
# Creating a dictionary for the result
res = {}.fromkeys(vowels, 0)
# Checking for occurence of vowel and incrementing it's count in the res
# vowels are the key in dictionary res
# value according to the key are incremented 
for char in string:
    if char in vowels:
        res[char] += 1

# Printing the final result, count of vowels
print("Count of vowels ")
print(res)