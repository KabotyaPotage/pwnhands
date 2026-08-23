// gcc -g -fno-stack-protector -no-pie bof_hello.c -o ../build/bof_hello
// objdump -d ../build/bof_hello -M intel > dump.txt
#include <stdio.h>

int main(void) {
    // setup
    setbuf(stdin, NULL);
    setbuf(stdout, NULL);
    setbuf(stderr, NULL);

    // main
    char buf[0x10];
    gets(buf);
}

int hello(void) {
    puts("Hello World!");
}