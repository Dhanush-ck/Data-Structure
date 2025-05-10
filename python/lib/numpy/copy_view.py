# copy() - copies array into a new array, the copy array have it's own data
# Changes to the copy array does not affects the original array

# view() - creates just a view of the array, the view array does not own data
# Changes to the view array affects the original array

import numpy as np

list1 = [1, 2, 3, 4, 5, 6, 7]
array1 = np.array(list1)
array2 = array1.copy()
array3 = array1.view()

print()
print("Arrays before modification")
print(f"Original array : {array1}")
print(f"Copy array : {array2}")
print(f"View array : {array3}")

array1[0] = 10
print()
print("Arrays after modifying original array")
print(f"Original array : {array1}")
print(f"Copy array : {array2}")
print(f"View array : {array3}")

array2[0] = 20
print()
print("Arrays after modifying copy array")
print(f"Original array : {array1}")
print(f"Copy array : {array2}")
print(f"View array : {array3}")

array3[0] = 30
print()
print("Arrays after modifying view array")
print(f"Original array : {array1}")
print(f"Copy array : {array2}")
print(f"View array : {array3}")