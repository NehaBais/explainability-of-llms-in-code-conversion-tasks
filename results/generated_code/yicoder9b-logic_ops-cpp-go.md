Here's how you can convert the C++ code to Go: 

```go
package main

import (
    "fmt"
)

func printLogic(a bool, b bool) {
    fmt.Println("a and b is", a && b)
    fmt.Println("a or b is", a || b)
    fmt.Println("not a is", !a)
}

func main() {
	printLogic(true, false) // replace with your values
}
```
This Go code does the same thing as the C++ function: it takes two boolean arguments and prints out their "and", "or", and "not" operations. Note that in Go there is no need to convert boolean values to string explicitly because `fmt.Println` can handle booleans without issues. 

You may call this method inside a main function with your required values for 'a' and 'b'.
