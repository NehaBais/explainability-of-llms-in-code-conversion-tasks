In GoLang, you can use the `fmt` package to perform string interpolation similar to Java's `printf()` function. Here is how you would convert your provided Java code into Golang:

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

In this GoLang code:
- `fmt.Sprintf()` is used to perform string interpolation and return the resulting string. It works similarly to Java's `String.format()`.
- `%s` is a placeholder for a string in the format string, which will be replaced by the value of the variable `adjective`.
- The result is then stored into `lyric`. 

Finally, this lyric is printed out using `fmt.Println(lyric)`.
