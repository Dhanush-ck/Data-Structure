matrix1 = []
num1 = int(input("Enter the number of rows for matrix 1 : "))
print("Enter the elements")
for i in range(num1):
    row1 = []
    for j in range(num1):
        row1.append(int(input()))
    matrix1.append(row1)

matrix2 = []
num2 = int(input("Enter the number of rows for matrix 2 : "))
print("Enter the elements")
for i in range(num2):
    row2 = []
    for j in range(num2):
        row2.append(int(input()))
    matrix2.append(row2)

if(num1 != num2):
    print("Matrix addition not possible")
else:
    res = [[0 for i in range(num1)] for j in range(num1)]
    for i in range(num1):
        for j in range(num2):
            res[i][j] = matrix1[i][j] + matrix2[i][j]

    print("Matrix 1")
    for i in range(num1):
        for j in range(num1):
            print(matrix1[i][j], end=" ")
        print()

    print("Matrix 2")
    for i in range(num2):
        for j in range(num2):
            print(matrix2[i][j], end=" ")
        print()

    print("Resultant matrix")
    for i in range(num1):
        for j in range(num1):
            print(res[i][j], end=" ")
        print()