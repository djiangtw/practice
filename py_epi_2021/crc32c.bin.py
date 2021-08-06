import crc32c
import os

def readbin(n):
    if (os.path.isfile('./rs3.rom.bin') == False):
        print("no 'rs3.rom.bin'. please check if the file exists")
        return 0
    else:
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
        return 1

def main():
    print("read file 'rs3.rom.bin' and calculate the crc32c value.")
    readbin(16)

"""
entry
"""
if __name__ == "__main__":
    main()
