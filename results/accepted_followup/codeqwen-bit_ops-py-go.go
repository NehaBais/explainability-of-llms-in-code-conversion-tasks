package main

import (
	"fmt"
)

func bitwiseBuiltIns(width int, A int, b int) {
	mask := (1 << width) - 1
	fmt.Printf("    AND:     0b%0*[1]b\n", width, A&mask)
	fmt.Printf("        &  0b%0*[2]b\n", width, b&mask)
	fmt.Printf("        =  0b%0*d\n", width, (A&b)&mask)

	// ... other parts remain the same
}

func helperFuncs(width int, A int) {
	// ... other parts remain the same
}

func main() {
	bitwiseBuiltIns(8, 27, 125)
	helperFuncs(8, 27)
}
