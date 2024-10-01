In GoLang, the bitwise operations can be performed using built-in functions. Here is a conversion of the given C code to Go:

```go
package main

import (
	"fmt"
)

func bitwise(a int, b int) {
	fmt.Println("a and b:", a & b) 
	fmt.Println("a or b:", a | b) 
	fmt.Println("a xor b:", a ^ b) 
	fmt.Println("not a:", ^a) 
	fmt.Println("a << n:", a<<b) // left shift 
	fmt.Println("a >> n (arithmetic):", a>>b) // arithmetic right shift
    
	// logical right shift
	var c uint32 = uint32(a) // Convert to unsigned integer for logical right shifting
	fmt.Println("c >> b (logical):", c>>b) 
}

func main() {
	bitwise(5, 2)  // Test the function with some values
}
```
Please note that Go does not support bit rotation operations directly like C or other languages. You would need to implement this manually as it is outside of the standard library functions provided by Go. This might involve a combination of shift and XOR/OR operations based on your specific requirements.
