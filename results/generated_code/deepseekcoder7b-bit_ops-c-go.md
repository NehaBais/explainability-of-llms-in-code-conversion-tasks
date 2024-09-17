In Go language, bitwise operations can be performed using the bitwise & for AND, | for OR, ^ for XOR and << or >> for left and right shift respectively. Bitwise NOT operation (~) is not supported in Go as it does not exist in C. For these reasons, we need to use math/bits package in Go which provides functions to perform bitwise operations that are not available in the basic Go language.
The Rotate operations can be achieved using a custom function. 
```go
package main

import (
	"fmt"
	"math/bits"
)

func rotateLeft(a int, b int) int {
	return (a<<b)|(a>>(32-b))
}

func rotateRight(a int, b int) int {
	return (a>>b) | (a<<(32-b)) 
}

func main() {
	var a int = 10;  // You can replace these values with any integer inputs you have.
    var b int =  2;  // You can replace these values with any integer inputs you have.
	
	fmt.Printf("a and b: %d\n", a&b)
	fmt.Printf("a or b: %d\n", a|b)
    fmt.Printf("a xor b: %d\n", a^b)
    
	// Bitwise NOT operation (~), Left shift, Right shift are not available in Go as it does not exist in C. So we can skip those operations for now.
	
	fmt.Printf("rotate left of a by b bits: %d\n", rotateLeft(a,b))  // Left Rotation
    fmt.Printf("rotate right of a by b bits: %d\n", rotateRight(a,b))  // Right Rotation
}
```
This will print the output to standard console (stdout) in integer form for all bitwise operations except NOT operation and left & right rotations which are not supported in Go. The result of "not a" operation is also omitted as it's equivalent with ~a in C language, but it's not supportive in Go because ~ operator does not exist in basic Go language.

