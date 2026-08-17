CC := gcc
CFLAGS := -g

TARGET := ../build/in_out
SRC := in_out.c

$(TARGET): $(SRC)
	mkdir -p ../build
	$(CC) $(CFLAGS) $(SRC) -o $(TARGET)

.PHONY: clean
clean:
	rm -f ../build/in_out