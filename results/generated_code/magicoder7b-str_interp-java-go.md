 In GoLang, you can use the `fmt.Sprintf()` function to achieve string interpolation similar to the Java's `String.format()`. Here is the equivalent code in Golang:

```go
package main

import (
	"fmt"
)

func main() {
	adjective := "little"
	lyric := fmt.Sprintf("Mary had a %s lamb", adjective)
	fmt.Println(lyric)
}
```
In the GoLang code, `Sprintf()` is similar to `String.format()` in Java where `%s` is used for string interpolation and variables are passed to it within the parentheses. The result of this code will be "Mary had a little lamb".
