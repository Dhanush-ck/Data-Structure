def calculate_hcf(x, y) :
    if(x < y):
        smallest = x
    else:
        smallest = y
    for i in range(1, smallest+1):
        if(x % i == 0 and y % i == 0):
            hcf = i
    return hcf

x = int(input("Enter the first number : "))
y = int(input("Enter the second number : "))
print(f"HCF = {calculate_hcf(x, y)}")