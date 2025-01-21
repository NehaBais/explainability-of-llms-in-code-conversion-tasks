 Sure, here is the equivalent code in Golang:

```go
package main

import (
	"fmt"
)

func main() {
	s := "hello"
	fmt.Println(s + " literal")
	s2 := s + " literal"
	fmt.Println(s2)
}
```

This Go code does the following:
1. Creates a string variable `s` initialized with the value `"hello"`.
2. Prints the concatenation of `s` and the string literal `" literal"` using `fmt.Println`.
3. Assigns the concatenated result to another string variable `s2`.
4. Prints the content of `s2` using `fmt.Println`.
