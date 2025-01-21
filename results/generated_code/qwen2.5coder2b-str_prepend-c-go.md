In Go, you can use the `fmt` package to convert strings, and `strconv` for integer conversions if needed. Here is your code in Go:

```go
package main

import (
	"fmt"
)

func main() {
	str := "my String"
	cstr := "Changed "
	dup := fmt.Sprintf("%s%s", cstr, str)
	fmt.Println(dup)
}
```

This program creates a string variable `str`, prepends it with another string literal `cstr`, and then prints the result. It also frees up the memory allocated by `dup` using `free`, but Go does not have a built-in `free` function like C, so this is handled in the calling code (`fmt.Println(dup)`).
