Below is the Go version of your Java code:

```go
package main

import (
	"fmt"
	"math/bits"
)

func bitwise(a int, b uint) {
	fmt.Println("a AND b: ", a&b)
	fmt.Println("a OR b: ", a|b)
	fmt.Println("a XOR b: ", a^b)
	fmt.Printf("NOT a: %v\n", ^a)
	fmt.Printf("a << b: %v\n", a<<b) // left shift
	fmt.Printf("a >> b: %v\n", a>>b) // arithmetic right shift
	fmt.Printf("a >>> b: %v\n", uint(a)>>b) // logical right shift 
	fmt.Printf("a rol b: %v\n", bits.RotateLeft32(uint(a), int(b))) //rotate left, Go 1.13+
	fmt.Printf("a ror b: %v\n", bits.RotateLeft32(^uint(a), int(b))) //rotate right, Go 1.13+
}

func main() {
	bitwise(10, 2)
}
```

In Golang:
- The `NOT` operator is the `^` symbol.
- In a bitwise shift operation (both left and right), the second argument (`b`) should be of type `uint`, because negative numbers can't be shifted in Go.
- The rotate functions are part of the `math/bits` package. They operate on `uint`s, not `int`s, so when you want to rotate an `int`, you first need to convert it to a `uint`. This is done for the rotate right operation. For rotate left, Go uses a special function (`bits.RotateLeft32`) because there's no standard library method to do it directly with integers. The 32 bit size is used here as an example, but this can be adjusted depending on the size of the integer you're working with.
- In Golang, there are no bitwise left and right rotate operations for integers by default so we use `math/bits` package.
- The output might contain negative numbers due to two's complement representation of negative numbers in memory. If you want a unsigned representation always, convert it back to `uint`.
