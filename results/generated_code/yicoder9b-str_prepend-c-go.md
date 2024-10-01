In GoLang, you can accomplish the same task with the `strings` package. Here is how to convert that C code:

```go
package main

import (
	"fmt"
	"strings"
)

func main() {
	str := "my String"
	prependStr := "Changed "
	newString := prependStr + str
	fmt.Println(newString)
}
```
This GoLang program does the same thing as your C code - it defines a string variable and prepends another string literal to it, then prints out the result.
