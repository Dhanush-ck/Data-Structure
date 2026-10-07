n1 = int(input("Enter the number of elements in first dictionary: "))
dict1 = {}

for i in range(n1):
    key = input("Enter the key: ")
    value = input("Enter the value: ")
    dict1[key] = value

n2 = int(input("Enter the number of elements in second dictionary: "))
dict2 = {}

for i in range(n2):
    key = input("Enter the key: ")
    value = input("Enter the value: ")
    dict2[key] = value


dict3 = dict1
dict3.update(dict2)
print("Merged dictionary:", dict3)