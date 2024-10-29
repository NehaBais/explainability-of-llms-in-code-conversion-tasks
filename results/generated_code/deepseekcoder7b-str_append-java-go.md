In Golang, you can use the "+" operator to append a string to another one. Here's how you would implement that code in Go:

```go
package main

import (
	"fmt"
)

func main() {
	var str string = "abc"
	fmt.Println(str)
	str += "def"
	fmt.Println(str)
}
```

In this code, the variable `str` is declared as a string and it's initialized with the value "abc". Then it gets printed to stdout using `fmt.Println()`. After that, the append operation adds "def" to `str` in place, resulting in "abcdef", which then gets printed out again.

