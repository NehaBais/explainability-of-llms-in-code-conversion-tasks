In Golang, bitwise operations are done using specific operator symbols, and there is no equivalent of JavaScript's `~` symbol for bitwise NOT. It does not exist in Go either as per the language specification. Also, Go doesn’t support rotations on integer types because it lacks built-in support for unsigned integers of arbitrary size.

Below is your JavaScript function converted to Golang:
```go
package main

import (
	"fmt"
)

func bitwise(a int, b int){
   fmt.Println("a AND b: ", a & b)  // Bitwise AND
   fmt.Println("a OR b: ", a | b)   // Bitwise OR
   fmt<｜begin▁of▁sentence｜>kipfmt.Println("a XOR b: ", a ^ b)  // Bitwise XOR
   
   fmt.Println("a << b: ", a<<b) // Left shift, Go does not support bit rotation operations
   fmt.Println("a >> b: ", a>>b) // Right shift
}
```
You will need to handle overflow on the left shift manually if you want it to wrap around. However, this isn't something that's built into Golang and would require implementing your own function for wrapping around.

