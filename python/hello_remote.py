from pwn import *

# set binary path
context.binary = "../build/hello"

_, host, port = "nc localhost 1337".split()
sh = remote(host, port)

# get one text line
text = sh.recvline()
print(text.decode())

sh.close()