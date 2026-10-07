import math

a = float(input("Enter first coefficient: "))
b = float(input("Enter second coefficient: "))
c = float(input("Enter third coefficient: "))

d = b**2 - 4*a*c

if d > 0:
    r1 = (-b + math.sqrt(d))/(2*a)
    r2 = (-b - math.sqrt(d))/(2*a)
    print(f"Real roots are  {r1:.3f} and {r2:.3f}")
elif d < 0:
    r1 = f"{-b/(2*a):.3f} + i{math.sqrt(-d)/(2*a):.3f}"
    r2 = f"{-b/(2*a):.3f} - i{math.sqrt(-d)/(2*a):.3f}"
    print(f"Imaginary roots are {r1} and {r2}")
else:
    r = -b/(2*a)
    print(f"Root is {r}")
    