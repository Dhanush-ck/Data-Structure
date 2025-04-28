import cmath
print("Enter the coefficients of quadratic equation")
a = float(input("Coeffecient of x^2 : "))
b = float(input("Coefficient of x : "))
c = float(input("Constant : "))

d = (b**2) - (4 * a * c)
if(d < 0):
    print("No solution")
elif(d == 0):
    x = -b / (2 * a)
    print("Both solutions are equal")
    print(f"Solutions are {x} and {x}")
else: 
    x1 = (-b + cmath.sqrt(d))/(2 * a)
    x2 = (-b - cmath.sqrt(d))/(2 * a)
    print(f"Solutions are {x1} and {x2}")
    