# array() - used to create array object
# ndim  - returen the dimension of the array object

import numpy as np

print("\n One dimension\n")
list1 = [1, 2, 3, 4, 5]
array1 = np.array(list1)
print(array1)
print(f"Dimmension of the array is {array1.ndim}")

print("\n Two dimension\n")
list2 = [[1, 2, 3], [4, 5, 6]]
array2 = np.array(list2)
print(array2)
print(f"Dimension of the array is {array2.ndim}")

print("\n Three dimension\n")
list3 = [[[1, 2],[3, 4]], [[5, 6], [7, 8]]]
array3 = np.array(list3)
print(array3)
print(f"Dimension of the array is {array3.ndim}")