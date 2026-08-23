from pwn import *

# set binary path
context.binary = "../build/hello"

sh = process()

# get one text line
text = sh.recvline()
print(text.decode())

sh.close()