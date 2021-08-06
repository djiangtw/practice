#import random
import crc32c
#import numpy as np

def readbin():
    with open("c4.py", "rb") as f:
        bytes_read = f.read(12)
        while bytes_read:
            for b in bytes_read:
                print(hex(b))
            return 0

def readbin2(n):
    b = b""
    with open("rs3.rom.bin", "rb") as f:
        while (byte := f.read(1)):
            b += byte
        crc = 0;
        for c in range(16):
            if c == 0:
                crc = crc32c.crc32c(bytes([b[c]]))
            else:
                crc = crc32c.crc32c(bytes([b[c]]), crc)
            #a = b[c]
            #print(hex(a))
        print(hex(crc))
        return b

def main():
    print("read bin")
    #readbin()
    readbin2(16)

"""
entry point
"""
if __name__ == "__main__":
    main()
