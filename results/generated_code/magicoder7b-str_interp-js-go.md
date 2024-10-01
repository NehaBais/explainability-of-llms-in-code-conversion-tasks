 In Golang, you can use the `strings` package and its function `Replace()` to achieve similar functionality like JavaScript's `replace()`. Here is how you might write this in Go:

```go
package main

import (
	"fmt"
	"strings"
)

func main() {
	original := "Mary had a X lamb"
	little := "little"
	replaced := strings.Replace(original, "X", little, -1) // Does not change the original string

	fmt.Println(replaced)  // Outputs: Mary had a little lamb
}
```
