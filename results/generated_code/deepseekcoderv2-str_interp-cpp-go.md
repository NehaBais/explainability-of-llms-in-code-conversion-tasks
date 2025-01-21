 Sure, here is the equivalent code in Golang:

```go
package main

import (
	"fmt"
	"strings"
)

func main() {
	original := "Mary had a X lamb."
	toBeReplaced := "X"
	replacement := "little"

	newString := strings.Replace(original, toBeReplaced, replacement, 1)
	fmt.Println("String after replacement:", newString)
}
```

In this Golang code:
- We use the `strings` package for string manipulation.
- The `Replace` function from the `strings` package is used to replace the first occurrence of `X` with `little`.
- The result is printed using `fmt.Println`.
