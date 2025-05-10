# shape - number of elements in each dimension
# reshape - changing the shape of an array
# to flatten an array to 1D from multidimension just put the value of reshape to -1
# reshape(-1)

import numpy as np

list1 = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12]
array1 = np.array(list1)

print()
print("1D array(Original)")
print(array1)
print(f"Shape of the array is {array1.shape}")

array2 = array1.reshape(4, 3)
print()
print("2D array(Reshaped)")
print(array2)
print(f"Shape of the array is {array2.shape}")

array3 = array1.reshape(2, 2, 3)
print()
print("3D array(Reshaped)")
print(array3)
print(f"Shape of the array is {array3.shape}")

print()
print("Flattened array(From 3D)")
array4 = array3.reshape(-1)
print(array4)