// gcc -g format_string.c -o ../build/format_string
// objdump -d ../build/format_string -M intel > dump.txt
#include <stdio.h>

int target = 0;

int win(void) {
    puts("\n\nHello Format String Attack!");
}

int main(void) {
    // setup
    setbuf(stdin, NULL);
    setbuf(stdout, NULL);
    setbuf(stderr, NULL);

    // main
    printf("target address: %p\n", &target);

    printf("input: ");

    long secret_long = 0xdeadbeefabcdefff;
    char buf[0x100];
    fgets(buf, sizeof(buf), stdin);

    printf(buf);

    if (target == 0x12345678) {
        win();
    }
}