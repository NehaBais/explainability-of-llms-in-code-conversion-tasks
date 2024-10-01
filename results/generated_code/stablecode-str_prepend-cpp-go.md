Here is the equivalent code in Go:

```go
package main

import (
	"fmt"
	"strings"
)

func main() {
	myStrings := []string{"prepended to", "my string"}
	var prepended strings.Builder
	for _, str := range myStrings {
		prepended.WriteString(str)
	}
	finalStr := prepended.String()
	fmt.Println(finalStr)
}
```

In Go, we use the `strings.Builder` to efficiently concatenate strings in a loop. This is more efficient than using the `+` operator for string concatenation inside loops.
