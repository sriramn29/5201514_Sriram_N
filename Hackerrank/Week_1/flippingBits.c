#include <stdio.h>
#include <stdint.h>

uint32_t flippingBits(uint32_t n) {
    // The bitwise NOT operator (~) flips all the bits of the integer.
    return ~n;
}

int main() {
    int q;
    scanf("%d", &q);

    for (int i = 0; i < q; i++) {
        uint32_t n;
        scanf("%u", &n);
        printf("%u\n", flippingBits(n));
    }

    return 0;
}
