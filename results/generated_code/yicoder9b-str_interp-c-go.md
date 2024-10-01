In GoLang, you can use the `fmt` package for string formatting. Here is how you could convert that C code to Golang:

```go
package main

import (
	"fmt"
)

func main() {
	extra := "little"
	fmt.Printf("Mary had a %s lamb.\n", extra)
}
```
In GoLang, strings are formatted using the `%` operator in similar ways as it is used in C programming language. In this case, `%s` is used to replace a string value into the formatted string. The `Printf` function is used for printing and formatting the text. Note that the newline character (`\n`) is added at the end of the formatted string to move the cursor to the next line after printing it.
