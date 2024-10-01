In Go language the bitwise operations are performed using the same operators as in C and C++ but there is no built-in rotate functions for int type so we'll have to implement them manually:

```go
package main

import (
    "fmt"
)

func bitwise(a, b int){
  // AND operation
  fmt.Println("a AND b:", a & b)
  // OR operation
  fmt.Println("a OR b:", a | b)
  // XOR operation
  fmt.Println("a XOR b:", a ^ b)
  // NOT operation
  fmt.Println("NOT a:", ^a)
  // Left shift operation
  fmt.Println("a << b:", a << b)
  // Arithmetic right shift operation (sign preserving)
  fmt.Println("a >> b:", a >> b)
  // Logical right shift operation (zero filling)
  fmt.Println("a >>> b:", uint32(a) >> uint(b))
   // Rotate left
  fmt.Println("a rol b: ", (a<<b)|(a>>>(32-b))) 
  // Rotate right
  fmt.Println("a ror b: ", (a>>b)|(a<<(32-b))) 
}
```
This Go code does the same operations as your Java code but uses the bitwise operators and the printf method for output instead of System.out.println which is specific to Java. The rotate left and right operations are implemented manually using bitwise shift operation. Please note that this rotation operation can only be applied on 32-bit integers in Go.
