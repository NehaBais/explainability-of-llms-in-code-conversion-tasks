Sure! Here's the equivalent code in Go:
```go
package main

import (
	"fmt"
)

func main() {
	var string = "abc"
	fmt.Println(string)
	string += "def"
	fmt.Println(string)
}
```
In this code, we're using the `+=` operator to append the string `"def"` to the existing string variable `string`. The `fmt` package is used to print the contents of the variable after each operation.
