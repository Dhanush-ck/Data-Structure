n = int(input("Enter the number of the elements : "))
arr = []
print(f"Enter {n} elements ")
for i in range(n):
    arr.append(int(input()))

for i in range(n):
    min = i
    for j in range(i + 1, n):
        if(arr[j] < arr[min]):
            min = j
    arr[i], arr[min] = arr[min], arr[i]

print("Sorted array")
for i in arr:
    print(i)