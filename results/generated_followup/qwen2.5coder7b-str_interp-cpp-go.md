The error occurs because the `strings` package is not imported. To fix this, you need to import the `strings` package at the beginning of your Go file.

Here's the corrected code:

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

	newString := replaceString(original, toBeReplaced, replacement)
	fmt.Println("String after replacement:", newString)
}

func replaceString(s string, oldStr string, newStr string) string {
	return strings.Replace(s, oldStr, newStr, -1)
}
```
