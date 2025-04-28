matrix = []
r = int(input("Enter the number of rows : "))
c = int(input("Enter the number of columns : "))
print("Enter the elements")
for i in range(r):
    row = []
    for j in range(c):
        row.append(int(input()))
    matrix.append(row)

print("Entered Matrix")
for num in matrix:
    print(num)

transpose = [[0 for i in range(r)] for j in range(c)] 
for i in range(r):
    for j in range(c):
        transpose[j][i] = matrix[i][j]

print("Transpose of Matrix")
for num in transpose:
    print(num)