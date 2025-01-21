The error `undefined: strings` occurs because the `strings.Replace` function is not imported in the Go code provided. To fix this issue, you need to import the `strings` package at the beginning of your file.

```go
package main

import (
	"fmt"
	"strings" // Importing the 'strings' package
)

func main() {
	original := "Mary had a X lamb."
	toBeReplaced := "X"
	replacement := "little"

	newString := strings.Replace(original, toBeReplaced, replacement, -1)
	fmt.Println("String after replacement: ", newString)
}
```

This code will correctly replace all occurrences of `X` with `little` in the string `original`, and it will print the modified string.
