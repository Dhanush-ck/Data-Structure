def leap_year(year):
    if(year%4==0 and year%100!=0 or year%400==0):
        return True
    return False

year = int(input("Enter the year: "))
if leap_year(year):
    print(f"{year} is a leap year")
else:
    print(f"{year} is not a leap year")
    