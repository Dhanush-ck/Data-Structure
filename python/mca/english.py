string = input("Enter the string: ")
if string.endswith('ing'):
    print(f"New string: {string+"ly"}")
else:
    print(f"New string: {string+"ing"}")