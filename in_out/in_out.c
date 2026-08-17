// gcc -g in_out.c -o ../build/in_out
#include <stdio.h>

int main(void) {
    printf("Input something: ");

    char buf[0x10];
    fgets(buf,sizeof(buf),stdin);
    printf("Your input: %s", buf);
}