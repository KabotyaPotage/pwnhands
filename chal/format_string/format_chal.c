// gcc -g format_chal.c -o ../build/format_string
// objdump -d ../build/format_string -M intel > dump.txt
#include <stdio.h>
#include <stdint.h>
#include <sys/random.h> // for secret value, you doesn't need to hack this

void win(void) {
    puts("\n\nHello Format String Attack Lab!");
    puts("Lab Clear!!!!");
}

uint64_t key = 0;

int main(void) {
    // setup
    setbuf(stdin, NULL);
    setbuf(stdout, NULL);
    setbuf(stderr, NULL);

    // secret generation
    uint64_t secret; // random 64-bit value
    if (getrandom(&secret, sizeof(secret), 0) != sizeof(secret)) {
        return 1;
    }

    // main
    printf("key address: %p\n", (void *)&key);

    // fsb
    printf("input1: ");
    char buf[0x100];
    fgets(buf, sizeof(buf), stdin);
    printf(buf);

    printf("input2: ");
    fgets(buf, sizeof(buf), stdin);
    printf(buf);

    if ((secret ^ key) == 0xdeadbeef12345678) {
        win();
    }
}
