CC := gcc
CFLAGS := -g -no-pie -fno-stack-protector
OBJDUMP := objdump

TARGET := ../build/bof_hello
SRC := bof_hello.c
DUMP := dump.txt

# Build the binary first, then generate its disassembly.
.PHONY: all
all: $(DUMP)

$(DUMP): $(TARGET)
	$(OBJDUMP) -d $(TARGET) -M intel > $(DUMP)

$(TARGET): $(SRC)
	mkdir -p ../build
	$(CC) $(CFLAGS) $(SRC) -o $(TARGET)

.PHONY: clean
clean:
	rm -f $(TARGET) $(DUMP)
