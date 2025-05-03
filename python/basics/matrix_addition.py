# Creating empty list for matrix 1
matrix1 = []
# Reading number of rows in matrix 1
num1 = int(input("Enter the number of rows for matrix 1 : "))
# Reading elements for matrix 1
print("Enter the elements")
for i in range(num1):
    row1 = []
    for j in range(num1):
        row1.append(int(input()))
    matrix1.append(row1)

# Creating another empty list for matrix 2
matrix2 = []
# Reading number of rows in matrix 2
num2 = int(input("Enter the number of rows for matrix 2 : "))
# Reading elements for matrix 2
print("Enter the elements")
for i in range(num2):
    row2 = []
    for j in range(num2):
        row2.append(int(input()))
    matrix2.append(row2)

# Checking if the order of both matrix are same or not 
# If not same shows and error message that additionn is not possible
# If they are same will do the addition process
if(num1 != num2):
    print("Matrix addition not possible")
else:
    # Creating resultant matrix containing completing zero
    res = [[0 for i in range(num1)] for j in range(num1)]
    # Adding and storing the elements at the same position
    for i in range(num1):
        for j in range(num2):
            res[i][j] = matrix1[i][j] + matrix2[i][j]

    # Printing the first matrix 
    print("Matrix 1")
    for i in range(num1):
        for j in range(num1):
            print(matrix1[i][j], end=" ")
        print()

    # Printing the second matrix
    print("Matrix 2")
    for i in range(num2):
        for j in range(num2):
            print(matrix2[i][j], end=" ")
        print()

    # Printing the resultant matrix
    print("Resultant matrix")
    for i in range(num1):
        for j in range(num1):
            print(res[i][j], end =" ")
        print()

# end= is used to change the ending of a print statement
# By default it is \n
# By setting is to " " we can get the output in a single line