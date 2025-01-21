Here is the equivalent code in Golang:
```go
package main

import (
	"fmt"
)

func main() {
	s := "hello"

	fmt.Println(s)
	fmt.Println(s + " literal")

	s2 := s + " literal"
	fmt.Println(s2)
}
```

In Golang, strings are immutable, so you can't concatenate them directly like in C. Instead, we create a new string by using the `+` operator between two strings. This will allocate a new string with enough space to hold both strings and then copy their content into it.

Also, there's no need for manual memory management in Golang as it has garbage collection built-in.
