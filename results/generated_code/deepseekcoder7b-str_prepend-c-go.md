In Go, strings are immutable. Therefore to prepend you need a new string and concatenate the two required strings. Here is an equivalent version of your C program in Golang:

```go
package main

import (
	"fmt"
)

func main() {
	str := "my String"
	cStr := "Changed "
	newStr := cStr + str //prepends the string variable with another string literal.
	fmt.Println(newStr)
}
```

This Go program does the same thing as your C code: it prepends a string to another string and prints the result. Just like in C, if you want to modify the original string (which isn't recommended), then you would need to use `strings.Builder`. Here is how you could do that:

package main

import (
	"fmt"
	"strings"
)

func main() {
	str := "my String"
	cStr := "Changed "
	var b strings.Builder
	b.WriteString(cStr)
	b.WriteString(str) //appends string to builder
	newStr := b.String() 
	fmt<｜begin▁of▁sentence｜>
}

This version of the Go program does pretty much exactly what your C code did: it modified `str` by prepending another string literal to it and then printed out the result.

