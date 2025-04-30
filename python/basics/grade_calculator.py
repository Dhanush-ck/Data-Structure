# Reading first mark from the user
mark1 = int(input("Enter mark 1 : "))
# Reading second mark from the user
mark2 = int(input("Enter mark 2 : "))
# Reading third mark from the user
mark3 = int(input("Enter mark 3 : "))
# Reading fourth mark from the user
mark4 = int(input("Enter mark 4 : "))
# Reading fifth mark from the user
mark5 = int(input("Enter mark 5 : "))

# Finding average mark
avg = (mark1 + mark2 + mark3 + mark4 + mark5)/5

# Prints grade according to the mark
if(avg >= 90):
    print("Your grade is A+")
elif(avg >= 80):
    print("Your grade is A")
elif(avg >= 70):
    print("Your grade is B")
elif(avg >= 60):
    print("Your grade is C")
elif(avg >= 50):
    print("Your grade is D")
else:
    print("You failed")
