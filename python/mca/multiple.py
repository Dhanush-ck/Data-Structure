num = int(input("Enter the number: "))
n = int(input("Enter the number of multiples: "))

for i in range(1, n+1):
    print(f"{i:^2} * {num:^2} = {i*num:^3}")