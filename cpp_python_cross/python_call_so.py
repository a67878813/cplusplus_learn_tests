import ctypes
# ll = ctypes.cdll.LoadLibrary
# lib = ll('./ct.so')

from time import time
cpp = ctypes.CDLL('./ct.so')


def cm(n):
    cm_=0;
    for i in range( n)  :
        cm_+=i

    return cm_

import numpy as np
def sendToC():
    lib = ctypes.cdll.LoadLibrary("./ct.so")
    arr = np.array([[1,2,3],[4,5,6],[7,8,9],[10,11,12]],dtype = np.int32)
    print(arr)
    rows, cols = arr.shape

    # cast types.
    arr = arr.ctypes.data_as(ctypes.POINTER(ctypes.c_int))
    #arr =arr.ctypes.data_as(ctypes.c_char_p)
    #lib.show_matrix.argtypes =[np.ctypeslib.ndpointer(ctypes.c_int),ctypes.c_int,ctypes.c_int]

    lib.show_matrix(arr, rows, cols)


if __name__ == '__main__':
    num = 1000000
    s1 = time()
    print("cpp result = %d" % cpp.cm(num))

    print("cpp time consuming: " , time()-s1)


    s2 = time()
    cm(num)
    print("python time consuming: ", time()-s2)


    sendToC()