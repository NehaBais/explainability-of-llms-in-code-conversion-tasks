Sure, here is your Python code converted to Golang:

```go
package main

import (
	"fmt"
)

func main() {
	extra := "little"
	newStr := fmt.Sprintf("Mary had a %s lamb.", extra)
	fmt.Println(newStr)
}
```

The Go equivalent uses the `fmt.Sprintf` function to perform string formatting, similar to Python's f-strings (formatted string literals)). The resulting formatted string is then printed out using `fmt.Println`.
