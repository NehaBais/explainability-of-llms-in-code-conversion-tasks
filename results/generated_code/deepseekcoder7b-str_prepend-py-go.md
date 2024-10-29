In Golang, you can use the `strings` package to achieve a similar result. Here is how to do it:

```go
package main

import (
	"fmt"
	"strings"
)

func main() {
	s := "12345678"
	s = strings.Join([]string{"0", s}, "")  // by concatenation
	fmt.Println(s)
}
```
In this code, `strings.Join` is used to prepend the string with another string. It takes a slice of strings and concatenates them into one single string. The separator string ("0") is passed as the second argument to `strings.Join()`. This function is equivalent to Python's string concatenation (+) operator.

