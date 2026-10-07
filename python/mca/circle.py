def area_circle(r):
    return 3.14*r*r
def perimeter_circle(r):
    return 2*3.14*r

radius = float(input("Enter the radius of the circle: "))
print(f"Area of the circle is {area_circle(radius):.3f}")
print(f"Perimeter of the circle is {perimeter_circle(radius):.3f}")