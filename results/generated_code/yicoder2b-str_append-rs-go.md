Here is the equivalent code in Golang:

```Go
package main

import (
	"fmt"
)

func main() {
	hello := "Hello world"
	println(appendString(hello, "!!!!"))
}

func appendString(s string, suffix string) string {
	return s + suffix
}
```
In this Golang code, a new function `appendString` is created to achieve the same functionality as the Rust version. This function simply concatenates the input strings and returns the result. It's important to note that in Go, we use the `+` operator for string concatenation instead of the `add()` method like in Rust.
