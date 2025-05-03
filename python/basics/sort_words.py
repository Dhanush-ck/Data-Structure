# split() - used to split the string, by default the separator will be white space we can change it as we need

# lower() - used to convert string to lowercase

# Reading a string
string = input("Enter the string : ")
# Creating a list conataining all the words in the string
words = [word.lower() for word in string.split()]

# Printing the words in unsorted order
print()
print("Unsorted words")
for word in words:
    print(word)

# Sorting the word list
words.sort()

# Printing the words in sorted order
print()
print("Sorted words")
for word in words:
    print(word)