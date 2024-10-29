In Golang, you can use the "+" operator to concatenate strings. Here is how you might convert your C++ code into Go:

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

This Go code does the same thing as your C++: it creates two strings, `s` and `s2`. The string `s` is initialized to "hello", while `s2` is initialized by concatenating `s` with another string literal (" literal"). Both are then printed to standard output using `fmt.Println()`.

