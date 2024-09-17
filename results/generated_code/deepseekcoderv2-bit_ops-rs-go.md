### Solution

```go
package main

import (
    "fmt"
)

func main() {
	a := uint8(105)
	b := uint8(91)
	fmt.Printf("a      = %08b\n", a)
	fmt.Printf("b      = %08b\n", b)
	fmt.Printf("a | b  = %08b\n", a|b)
	fmt.Printf("a & b  = %08b\n", a&b)
	fmt.Printf("a ^ b  = %08b\n", a^b)
	fmt.Printf("!a     = %08b\n", ^uint8(a))
	fmt.Printf("a << 3 = %08b\n", a<<3)
	fmt.Printf("a >> 3 = %08b\n", uint8(int(a)>>3)) // right arithmetic shift
}
```
