mark1 = int(input("Enter mark 1 : "))
mark2 = int(input("Enter mark 2 : "))
mark3 = int(input("Enter mark 3 : "))
mark4 = int(input("Enter mark 4 : "))
mark5 = int(input("Enter mark 5 : "))

avg = (mark1 + mark2 + mark3 + mark4 + mark5)/5

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
