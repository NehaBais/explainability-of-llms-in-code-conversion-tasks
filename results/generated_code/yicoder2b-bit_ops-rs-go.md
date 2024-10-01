The equivalent Golang code for the given Rust function is:

```go
package main

import "fmt"

func main() {
    const a uint8 = 105
    const b uint8 = 91
	
    // print original bits of variables
	fmt.Printf("a      = %#04o\n", int(a))
	fmt.Printf("b      = %#04o\n", int(b))

    // perform bitwise operations and print the result in binary format
	fmt.Printf("a | b  = %#04o\n", a | b)
	fmt.Printf("a & b  = %#04o\n", a & b)
	fmt.Printf("a ^ b  = %#04o\n", a ^ b)
	fmt.Printf("!a     = %#04o\n", ~a&1)
	fmt.Printf("a << 3 = %#04o\n", uint8((a<<3)&7)) // left shift by 3 bits and mask with 7 (2^3-1)
    fmt.Printf("a >> 3 = %#04o\n", a>>3)
}
```

Please note that the behavior of shift operations in Golang and Rust can differ slightly because they use different bitwise operators. In Go, shifting on signed integers will give different results from Rust's version, which is why a different mask was used to mimic Rust's behavior.
