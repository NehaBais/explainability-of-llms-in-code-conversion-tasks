In GoLang, you can use `strings.Replace()` function for string replacement. Here is how you would convert that JavaScript code to Golang:

```go
package main

import (
	"fmt"
	"strings"
)

func main() {
	original := "Mary had a X lamb"
	little := "little"

	replaced := strings.Replace(original, "X", little, -1) // does not change the original string

	fmt.Println(replaced)
}
```

In this code, `strings.Replace()` is used to replace all instances of 'X' in the `original` string with the value in `little`. The `-1` argument tells `Replace()` to replace all occurrences. If you only wanted to replace one occurrence, you could use `0` instead of `-1`.

Also remember that Golang strings are immutable - they cannot be changed after creation, so any modification like this will result in a new string being created with the modifications.
