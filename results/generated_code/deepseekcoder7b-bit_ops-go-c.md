Below is the C version of your Golang code. For simplicity in this example, I am assuming that b will always be positive integer. Please adjust it according to your needs.

Please note that bitwise operations and shifts/rotates in C are typically done on unsigned integers instead of signed ones like Go does. This is because the sign bit (the highest order bit) determines the interpretation of negative numbers, which can lead to unexpected behavior. However, for simplicity we will assume a uint16 type here:

```c
#include <stdio.h>

void print_bin(uint16_t n) {
    for (int i = 15; i >= 0; --i) {
        if ((n & (1u << i))) 
            printf("1");
        else 
            printf("0");
    }
}

void bitwise(uint16_t a, uint8_t b){
	printf("a:   "); print_bin(a); printf("\n");
	printf("b:   "); print_bin(b); printf("\n");
		
	// Bitwise logical operations
	printf("and: "); print_bin(a & b); printf("\n");
	printf("or:  "); print_bin(a | b); printf("\n");
	printf("xor: "); print_bin(a ^ b); printf("\n");
		
	// Bitwise NOT operation
	printf("not: "); print_bin(~a); printf("\n");
			
	if (b > 16) { // max shift distance on 16-bit is 16. Adjust if necessary.
		printf("Shift/rotate amount greater than bit width, skipping...\n");
	} else {		
		// Logical shifts
		printf("shl: "); print_bin(a << b); printf("\n");
		printf("shr: "); print<｜begin▁of▁sentence｜>16b
)(a >> b); printf("\n");
			
		// Rotations
		printf("rol: "); print_bin((a << b) | (a >> (16 - b))); printf("\n");
		printf("ror: "); print_bin((a >> b) | (a << (16 - b))); printf("\n");
	}
}

int main() {
    uint16_t a = 460;  // Change these values as per your requirement.
    uint8_t b = 2;
	bitwise(a, b);		
}
```

