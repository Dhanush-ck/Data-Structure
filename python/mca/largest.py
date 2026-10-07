a = float(input("Enter the first number: "))
b = float(input("Enter the second number: "))
c = float(input("Enter the third number: "))

large=0

if a>b:
    if a>c:
        large = a
    else:
        large = c
else:
    if b>c:
        large = b
    else:
        large = c

print(f"Largest number is {large}")

# print(f"Largest number is {max([float(input(f"Enter number {i+1}: ")) for i in range(3)])}")