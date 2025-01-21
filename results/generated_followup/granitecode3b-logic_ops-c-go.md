The error occurred because the Golang code was not enclosed within a package declaration. The `func` keyword used in C is not recognized by the Golang compiler.

The corrected code for the given C code is as follows:
```go
package main
import "fmt"
func printLogic(a, b bool) {
 fmt.Printf("a and b is %t\n", a && b)
 fmt.Printf("a or b is %t\n", a || b)
 fmt.Printf("not a is %t\n", !a)
}
``` 
This code defines a function called `printLogic` that takes two boolean arguments, performs the logical operations, and prints the results to the console using the `fmt.Printf()` function.

