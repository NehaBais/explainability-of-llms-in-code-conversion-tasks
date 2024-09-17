 In Golang, you can perform the same operations as in Python. You'll need to use the built-in functions provided by Go for bitwise operations and for handling shifts and rotations.

Here is the equivalent code in Golang:

```go
package main

import (
	"fmt"
	"math/bits"
)

func printBinary(n int, width int) {
    fmt.Printf("0b%s\n", bits.FormatInt(uint64(n), width))
}

func and(a, b int) int {
    return a & b
}

func or(a, b int) int {
    return a | b
}

func xor(a, b int) int {
    return a ^ b
}

func not(a int) int {
    return ^a & ((1 << bits.Size) - 1) // Assuming the size of bit is 32 or 64
}

func shifts() {
    printBinary(and(0b010, 1), 8)
    printBinary(or(0b010, 1), 8)
    printBinary(xor(0b010, 1), 8)
    printBinary(not(0b010), 8)
    
    printBinary(bits.RotateLeft(and(0b010, 1), 1), 8)
    printBinary(bits.RotateRight(or(0b010, 1), 1), 8)
    printBinary(bits.RotateLeft(xor(0b010, 1), 1), 8)
    printBinary(not(and(0b010, 3)), 8)
}

func main() {
	shifts()
}
```
This Go code does the same operations as your Python code:

- AND operation between two integers.
- OR operation between two integers.
- XOR operation between two integers.
- Not operation on an integer to get its complement.
- Bitwise left shift by n places for a given integer.
- Bitwise right shift by n places for a given integer.
- Rotate an integer to the left by one place.
- Rotate an integer to the right by one place.

Please note that Go does not provide inbuilt functions for arithmetic right rotation, so for that you might need to use additional package like "math/bits" or manually implement it which is quite complex compared to bitwise operations.
