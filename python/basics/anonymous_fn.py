# list() - to create a list 
# map() - used to apply a given function to every item of an iterable, such as a list or tuple, and returns a map object
# lambda - keyword for creating an anonymous function

# Reading limit
limit = int(input("Enter the limit : "))
# Storing result as a list in a variable
res = list(map(lambda x : 2**x, range(limit)))
# Printing the count of results
print(f"Total number of terms is {limit}")
# Printing the result
for i in range(limit):
    print(f"2 ^ {i} = {res[i]}")