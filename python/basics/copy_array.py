# Reading size of the array from the user
num = int(input("Enter the size of the array : "))
# Creating an empty list for array
arr = []
print(f"Enter {num} elements")
# Reading elements of the array
for i in range(num):
    arr.append(int(input()))
# Creating another list with the size of the original array 
new_arr = [None for i in range(num)]
# Assigning elements to the new array
for i in range(num):
    new_arr[i] = arr[i]

# Prints original array
print("Original array")
print(arr)

# Prints new array
print("New array")
print(new_arr)