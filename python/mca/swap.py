a = int(input("Enter the first number: "))
b = int(input("Enter the second number: "))
print("Before swapping")
print(f"a = {a}, b = {b}")
a, b = b, a
print("After swapping")
print(f"a = {a}, b = {b}")
a = a + b
b = a - b
a = a - b
print("After again swapping")
print(f"a = {a}, b = {b}")