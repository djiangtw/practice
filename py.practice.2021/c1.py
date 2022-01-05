import random

def count_bits (x):
    num_bits = 0
    while x:
        num_bits += x & 1
        x >>= 1
    return num_bits

def parity0(x):
    result = 0
    while x:
        result ^= x & 1
        x >>= 1
    return result

def parity1(x):
    result = 0
    while x:
        result ^= 1
        x &= x - 1 # Drops the lowest set bit of x.
    return result

"""
" No PRECOMPUTED_PARITY defined
def parity(x):
    MASK_SIZE = 16
    BIT_MASK = 0xFFFF
    return ( PRECOMPUTED_PARITY [x >> (3 * MASK_SIZE )] ^
            PRECOMPUTED_PARITY [(x >> (2 * MASK_SIZE )) & BIT_MASK] ^
            PRECOMPUTED_PARITY [(x >> MASK_SIZE ) & BIT_MASK] ^
            PRECOMPUTED_PARITY [x & BIT_MASK ])
"""
def parity(x):
    x ^= x >> 32
    x ^= x >> 16
    x ^= x >> 8
    x ^= x >> 4
    x ^= x >> 2
    x ^= x >> 1
    return x & 0x1

def main():
    c = random.getrandbits(32)
    print(hex(c))
    print(count_bits(c))
    print(parity(0x123))

"""
entry point
"""
if __name__ == "__main__":
    main()
