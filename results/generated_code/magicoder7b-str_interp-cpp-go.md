 In Go, you can use the `strings` package's `Replace()` function to achieve this. Here's how your C++ code could be converted into Golang:

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
	newString := strings.Replace(original, toBeReplaced, replacement, -1)
	fmt.Println("String after replacement:", newString)
}
```

This Go code achieves the same result as your C++ code by using `strings.Replace()` method which replaces all occurrences of a specified old string with a new one in a source string. The third parameter `-1` means replacing all occurrences.
