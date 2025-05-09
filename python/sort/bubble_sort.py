def bubble_sort(arr, n):
    for i in range(n):
        for j in range(0, n - i - 1):
            if(arr[j] > arr[j + 1]):
                arr[j], arr[j + 1] = arr[j + 1], arr[j]

size = int(input("Enter the number of elements : "))
arr = []
print(f"Enter {size} elements")
for i in range(size):
    arr.append(int(input()))

bubble_sort(arr, size)

print("Sorted array")
for i in range(size):
    print(arr[i])