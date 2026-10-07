num = int(input("Enter the number: "))
counter = 0
n = num
while n!=0:
    n = n//10
    counter += 1

print(f"Number of digits in {num} is {counter}")