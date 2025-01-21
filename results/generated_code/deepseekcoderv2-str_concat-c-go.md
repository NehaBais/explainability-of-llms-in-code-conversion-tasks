 Sure! Here is the equivalent code in Go:

```go
package main

import (
	"fmt"
	"strings"
)

func main() {
	s := "hello"
	fmt.Println(s, "literal")
	// or
	fmt.Println(s + " literal")

	s2 := s + " literal"
	fmt.Println(s2)
}
```

Explanation:
1. In Go, you can concatenate strings using the `+` operator.
2. The `fmt.Println` function is used to print the string and literals.
3. There's no need for dynamic memory allocation like in C, as Go handles strings efficiently.
