The given Python code is already written in Golang. Here is the Go version of it:

```Go
package main

import (
	"fmt"
	"math/bits"
)

func bitwiseBuiltIns(width int, A int, b int) {
	mask := (1 << width) - 1
	fmt.Printf("    AND:     0b%0*[1]b\n", width, A & mask)
	fmt.Printf("        &  0b%0*[2]b\n", width, b & mask)
	fmt.Printf("        =  0b%0*d\n", width, (A & b) & mask)

	fmt.Println()
	fmt.Printf("    OR:      0b%0*[1]b\n", width, A & mask)
	fmt.Printf("        |  0b%0*[2]b\n", width, b & mask)
	fmt.Printf("        =  0b%0*d\n", width, (A | b) & mask)

	fmt.Println()
	fmt.Printf("    XOR:     0b%0*[1]b\n", width, A & mask)
	fmt.Printf("        ^  0b%0*[2]b\n", width, b & mask)
	fmt.Printf("        =  0b%0*d\n", width, (A ^ b) & mask)

	fmt.Println()
	fmt.Printf("    NOT:     0b%0*[1]b\n", width, A & mask)
	fmt.Printf("        =  0b%0*d\n", width, (^A) & mask)

	fmt.Println()
	fmt.Printf("SHIFTS\n")

	for i := 1; i <= 4; i++ {
		fmt.Printf("    LEFT:   rotl(%d, 0b%0*[1]b, %d)\n", width, A & mask, i)
		fmt.Printf("        =  0b%0*d\n", width, bits.RotateLeft32(uint32(A), int32(-i)))

		fmt.Println()
	}

	for i := 1; i <= 4; i++ {
		fmt.Printf("    RIGHT:  rotr(%d, 0b%0*[1]b, %d)\n", width, A & mask, i)
		fmt.Printf("        =  0b%0*d\n", width, bits.RotateRight32(uint32(A), int32(-i)))

		fmt.Println()
	}
}

func helperFuncs(width int, A int) {
	fmt.Println("\nHELPER FUNCS")
	aa := A & ^((1<<width)-1) // Sign extend the bits of a

	for i := 1; i <= 4; i++ {
		fmt.Printf("    LEFT:   rotl(%d, 0b%0*[1]b, %d)\n", width, A & mask, i)
		fmt.Printf("        =  0b%0*d\n", width, bits.RotateLeft32(uint32(A), int32(-i)))

		fmt.Println()
	}

	for i := 1; i <= 4; i++ {
		fmt.Printf("    RIGHT:  rotr(%d, 0b%0*[1]b, %d)\n", width, A & mask, i)
		fmt.Printf("        =  0b%0*d\n", width, bits.RotateRight32(uint32(A), int32(-i)))

		fmt.Println()
	}

	for i := 1; i <= 4; i++ {
		fmt.Printf("    ASR:   asr(%d, 0b%0*[1]b, %d)\n", width, A & mask, i)
		fmt.Printf("        =  0b%0*d\n", width, a>>i)

		fmt.Println()
	}
}

func main() {
	bitwiseBuiltIns(8, 27, 125)
	helperFuncs(8, 27)
}
```

Please note that `bits.RotateLeft32()` and `bits.RotateRight32()` functions used in the code are part of Go's standard library and it rotates a number to the left or right by a specified count. The result will be a non-negative integer, hence we cast the input to `uint32` before rotation.
