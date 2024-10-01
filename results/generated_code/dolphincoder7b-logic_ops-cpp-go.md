The equivalent of the C++ code in Golang would be as follows:
```go
package main

import "fmt"

func printLogic(a, b bool) {
    fmt.Printf("a and b is %v\n", a && b)
    fmt.Printf("a or b is %v\n", a || b)
    fmt.Printf("not a is %v\n", !a)
}
```
Note that in Golang, you can use the `fmt.Printf` function to print formatted output. The "%v" format specifier is used to print the value of an expression as it appears in the source code. In this case, we print the result of logical "and", "or", and "not" on both arguments a and b. 

You can also use the `fmt.Sprintf` function to create a string representation of the output (if needed). The `%v` format specifier is used to represent the value as it appears in the source code.
