Here is the equivalent code in Golang:

```go
package main

import (
	"fmt"
)

func main() {
	s := "hello"
	fmt.Println(s, "literal")
	s2 := s + " literal"
	fmt.Println(s2)
}
```

The above Go program will perform exactly what your C++ program does. It creates a string variable `s` and prints its value concatenated with the string literal " literal". Then it creates another string variable `s2`, which is the result of concatenating `s` with another string literal " literal", and prints its value as well.
