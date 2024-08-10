import numpy as np
from scipy import linalg
A = np.array([[1,2], [4,3]])
B = linalg.inv(A)
print(B)
# [[-0.6  0.4]
#  [ 0.8 -0.2]]


