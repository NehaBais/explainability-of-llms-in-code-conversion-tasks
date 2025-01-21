Here is the equivalent code in Golang:

```go
package main

import (
	"fmt"
)

func main() {
	myStrings := []string{"prepended to", "my string"}
	prepended := ""
	for _, str := range myStrings {
		prepended += str + " "
	}
	fmt.Println(prepended)
}
```

This code creates a slice of strings in Golang, then uses a for loop to iterate through each string and append it to the `prepended` variable. The final result is then printed out with `fmt.Println()`.
