Here is the equivalent code in Golang:

```go
package main

import (
	"fmt"
)

func bitwise(a int, b int) {
	fmt.Println("a AND b:", a & b)
	fmt.Println("a OR b:", a | b)
	fmt.Println("a XOR b:", a ^ b)
	fmt.Println("NOT a:", ^a)
	fmt.Printf("a << %d: ", b)
	if b < 0 {
		b = -b
	}
	for i := 0; i < b; i++ {
		a <<= 1
	}
	fmt.Println(a)

	fmt.Printf("a >> %d: ", b)
	if b < 0 {
		b = -b
	}
	for i := 0; i < b; i++ {
		a >>= 1
	}
	fmt.Println(a)

	fmt.Printf("a >>> %d: ", b)
	if b < 0 {
		b = -b
	}
	var result int64
	result = int64(a) >> uint(b)
	fmt.Println(result)

	fmt.Printf("a rol %d: ", b)
	a, _ = leftRotate(a, b)
	fmt.Println(a)

	fmt.Printf("a ror %d: ", b)
	a, _ = rightRotate(a, b)
	fmt.Println(a)
}

func leftRotate(x int, n int) (int, error) {
	if n >= 32 || n < 0 {
		return x, fmt.Errorf("Invalid rotate value")
	}
	n %= 32
	return x << n | x >> (32 - n), nil
}

func rightRotate(x int, n int) (int, error) {
	if n >= 32 || n < 0 {
		return x, fmt.Errorf("Invalid rotate value")
	}
	n %= 32
	return x >> n | x << (32 - n), nil
}

func main() {
	bitwise(10, 2)
}
```

The above code performs bitwise operations as requested. Please note that right logical and arithmetic shift are handled manually for negative b value. Also, rotation is implemented using modulo operation on the second parameter to ensure it stays within valid range (0-31). 

This implementation assumes that `a` and `b` are 32-bit integers. If you need them to be larger or smaller, you will need to adjust the code accordingly.
