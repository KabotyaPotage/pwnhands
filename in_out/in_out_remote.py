from pwn import *

# set binary path
context.binary = "../build/in_out"

_, host, port = "nc localhost 1337".split()
sh = remote(host, port)

prompt = sh.recvuntil(b"something:")
print("prompt: ", prompt.decode())

sh.sendline(b"Hello Send!")

sh.interactive()