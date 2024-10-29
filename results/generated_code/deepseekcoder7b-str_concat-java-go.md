The equivalent Go code for the provided Java program is as follows -

```go
package main

import "fmt"

func main() {
	s := "hello"
	fmt.Println(s + " literal")

	s2 := s + " literal"
    fmt.Println(s2)
}
``` 
In this Go code, the '+' operator is used for string concatenation in similar way as it is done in Java. The `fmt.Println()` function from the `fmt` package provides a convenient way to print values and their representation to standard output. It automatically adds spaces between arguments when multiple parameters are provided.

