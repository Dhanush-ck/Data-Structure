a = int(input("Enter the first number: "))
b = int(input("Enter the second number: "))
c, d = a, b
while b != 0:
    a,b = b, a%b

print(f"GCD of {c} & {d} is {a}")