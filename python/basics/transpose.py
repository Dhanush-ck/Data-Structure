# Program to find the transpose of a matrix

# Creating an empty list for matrix
matrix = []
# Reading number of rows in the matrix
r = int(input("Enter the number of rows : "))
# Reading number of columns in the matrix
c = int(input("Enter the number of columns : "))
print("Enter the elements")
# Creating a loop according to the row count
for i in range(r):
    # Creates another empty list for storing each row in matrix
    row = []
    # Creating another loop according to the column count
    for j in range(c):
        # Reading elements row wise and appending to row list
        row.append(int(input()))
    # Appending the row list to matrix list after reading entire row elements 
    matrix.append(row)

# Prints the entered matrix
print("Entered Matrix")
for num in matrix:
    print(num)

# Creates a list containing zeros according to the row count and column count taken vice versa 
transpose = [[0 for i in range(r)] for j in range(c)] 
# Assigning matrix elements to the transpose
for i in range(r):
    for j in range(c):
        transpose[j][i] = matrix[i][j]

# Prints the transpose matrix
print("Transpose of Matrix")
for num in transpose:
    print(num)