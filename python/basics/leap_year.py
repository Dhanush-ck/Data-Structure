# A year will be a leap year 
# If it is divisible by 4 AND
# Not divisible by 100, unless
# It is also divisible by 400

# Reading year 
year = int(input("Enter a year : "))
if(year % 4 == 0):
    if(year % 100 == 0):
        if(year & 400 == 0):
            print(f"{year} is leap year")
        else:
            print(f"{year} is not leap year")
    else:
        print(f"{year} is leap year")
else:
    print(f"{year} is not leap year")