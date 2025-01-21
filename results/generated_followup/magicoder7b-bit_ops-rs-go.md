 The error is because Golang does not have built-in function for converting integer to binary string, so we cannot use `bits.FormatUint`. 
This can be fixed by importing `"fmt"` package which provides `Printf` and other functions for string formatting. 
Then replace the undefined functions in your code with their correct equivalents.

Corrected code:

```go
package main

import (
	"fmt"
)

func bitwiseOps(a, b uint8) {
    fmt.Printf("a      = %s\n", strconv.FormatUint(uint64(a), 2))
    fmt.Printf("b      = %s\n", strconv.FormatUint(uint64(b), 2))
	fmt.Printf("a | b  = %s\n", strconv.FormatUint(uint64(a|b), 2))
    fmt.Printf("a & b  = %s\n", strconv.FormatUint(uint64(a&b), 2))
	fmt.Printf("a ^ b  = %s\n", strconv.FormatUint(uint64(a^b), 2))
	fmt.Printf("!a     = %s\n", strconv.FormatUint(uint64(!a), 2))
    fmt.Printf("a << 3 = %s\n", strconv.FormatUint(uint64(a<<3), 2))
	fmt.Printf("a >> 3 = %s\n", strconv.FormatUint(uint64(a>>3), 2))
}

func main() {
    bitwiseOps(105, 91)
}
```
