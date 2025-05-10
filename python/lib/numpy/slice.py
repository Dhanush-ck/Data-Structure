# Slicing alow us to print or select specific portion of array, list, tuple...
# array[start:stop:step]
# start - starting index
# stop - ending index
# step - increment value(by default 1)

import numpy as np

print("\nOne Dimension")

list1 = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
array1 = np.array(list1)
print("\nArray")
print(array1)
# Prints elements at the index 1, 2, 3, 4, 5, 6
print(f"\nElements from index 1 to 7 is {array1[1:7]}")
# Prints elements at the index 5, 6, 7 , 8, 9
print(f"Elements from index 5 to end is {array1[5:]}")
# Prints elements at the index 0, 1, 2, 3, 4, 5
print(f"Elements upto index 6 is {array1[:6]}")
# Prints elements at the index 1, 3, 5, 7
print(f"Elements from 1 to 8 using step value 2 is {array1[1:8:2]}")

print("\nTwo Dimension")
list2 = [[1, 2, 3, 4], [5, 6, 7, 8]]
array2 = np.array(list2)
print("\nArray")
print(array2)
# Prints elements at the index [0][1], [0][2]
print(f"Row 1 slicing is {array2[0, 1:3]}")
# Prints elements at the index [1][1], [1][2], [1][3]
print(f"Row 2 slicing is {array2[1, 1:4]}")