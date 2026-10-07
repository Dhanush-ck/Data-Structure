num_list = list(map(int, input("Enter the list of numbers: ").split(' ')))
print("List after removing even numbers:", [i for i in num_list if i%2!=0])