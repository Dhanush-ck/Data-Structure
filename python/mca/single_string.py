string1 = input("Enter the first string: ")
string2 = input("Enter the second string: ")
while True:
    position = int(input("Enter the position: "))
    if position > min(len(string1), len(string2)):
        print("Enter valid position: ")
    else:
        break

print(f"Single string: {string1[:position] + string2[position] + string1[position+1:] + string2[:position] + string1[position] + string2[position+1:]}")
