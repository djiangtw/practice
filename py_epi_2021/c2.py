import random
import numpy as np


def even_odd(A):
    next_even , next_odd = 0, len(A) - 1
    while next_even < next_odd:
        if A[ next_even ] % 2 == 0:
            next_even += 1
        else:
            A[ next_even ], A[next_odd] = A[next_odd], A[ next_even ]
            next_odd -= 1

def main():
    a = np.random.randint(1, 100, 10)
    print(a)
    even_odd(a)
    print(a)

    r, g, b = range(3)
    print( r)
    print( g)
    print( b)

"""
entry point
"""
if __name__ == "__main__":
    main()
