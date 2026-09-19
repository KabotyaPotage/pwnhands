CC := gcc
CFLAGS := -g
OBJDUMP := objdump

TARGET := ../build/format_string
SRC := format_chal.c
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
