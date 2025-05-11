import numpy as np

list1 = [[1, 2, 3], [4, 5, 6]]
array1 = np.array(list1)
list2 = [[7, 8, 9], [10, 11, 12]]
array2 = np.array(list2)
# We can use stack also for concatenation
# np.stack((array1, array2), axis=0)
array3 = np.concatenate((array1, array2), axis=0)
array4 = np.concatenate((array1, array2), axis=1)

print()
print("Array 1")
print(array1)
print()
print("Array 2")
print(array2)
print()
print("Concatenated along axis 0")
print(array3)
print()
print("Concatenated along axis 1")
print(array4)
# Accessing elements using nditer
# nditer() - helping function that can be used from very basic to very advanced iterations.
print()
print("Accessing elements using nditer")
for i in np.nditer(array1):
    print(i)

array5 = np.hstack((array1, array2))
array6 = np.vstack((array1, array2))
array7 = np.dstack((array1, array2))

print()
print("Stacked array along row")
print(array5)
print()
print("Stacked array along column")
print(array6)
print()
print("Stacked array along height")
print(array7)