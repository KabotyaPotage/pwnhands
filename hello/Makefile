CC := gcc
CFLAGS := -g

TARGET := ../build/hello
SRC := hello.c

$(TARGET): $(SRC)
	mkdir -p ../build
	$(CC) $(CFLAGS) $(SRC) -o $(TARGET)

.PHONY: clean
clean:
	rm -f ../build/hello