 Here's the equivalent Go code for the given C code:

```go
package main

import (
	"fmt"
	"strings"
)

func main() {
	str := "my String"
	cstr := "Changed "
	result := strings.Join([]string{cstr, str}, "")
	fmt.Println(result)
}
```

Explanation:
1. In Go, string concatenation is done using the `strings.Join` function from the `strings` package.
2. The `strdup` function in C is not directly available in Go, so we use a slice of strings and join them together with an empty separator.
