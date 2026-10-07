string = input("Enter the string: ")
frequency = {}

for s in string:
    frequency[s.upper()] = frequency.get(s.upper(), 0)+1 

for letter, count in frequency.items():
    print(f"{letter} - {count}")