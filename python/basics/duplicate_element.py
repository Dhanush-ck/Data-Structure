# Reading size of the array from the user
num = int(input("Enter the size of the array : "))
# Creating empty list for array
arr = []
# Reading elements of array
print(f"Enter {num} elements ")
for i in range(num):
    arr.append(int(input()))

# Creating another empty list to store duplicate elements
duplicate = []

for i in range(num-1):
    for j in range(i+1, num):
        # Checking if both are same
        if arr[i] == arr[j]:
            # Checking if it is not present in the duplicate list
            # If not it is added to the list
            if arr[i] not in duplicate:
                duplicate.append(arr[i])

# Printing the duplicate elements
print("Duplicate elements")
print(duplicate)