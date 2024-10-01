In Golang, you can achieve this using the `strings.Replace()` function. Here is how to convert your given JavaScript code:

```go
package main

import (
	"fmt"
	"strings"
)

func main() {
	original := "Mary had a X lamb"
	little := "little"

	replaced := strings.Replace(original, "X", little, -1)
	fmt.Println(replaced)
}
```

This Go program will replace all instances of 'X' in the original string with the value of little. The `-1` as third parameter means to replace all occurrences.

In Golang, you can't modify a string directly because strings are immutable. Instead, `strings.Replace()` returns a new string and leaves the original string unchanged, which is similar to what happens in JavaScript's `replace()`.
