#include <stdio.h>
int main() {
    printf("%d,%o,%x\n", 10, 10, 10);
    printf("%d,%d,%d\n", 10, 010, 0x10);
    printf("%d,%x\n", 012, 012);
    return 0;
}