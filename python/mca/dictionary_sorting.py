dictionary = {}
n = int(input("Enter the number: "))
for i in range(n):
    key = input("Enter the key: ")
    value = input("Enter the value: ")
    dictionary[key] = value
print("Sorted ascending:", dict(sorted(dictionary.items())))
print("Sorted descending:", dict(sorted(dictionary.items(), reverse=True)))