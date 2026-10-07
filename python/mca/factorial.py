n = int(input("Enter the number: "))
fact = 1

for i in range(n, 0,-1):
    fact *= i

print(f"{n}! = {fact}")