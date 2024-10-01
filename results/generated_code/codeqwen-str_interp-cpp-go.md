Here is the equivalent code in Golang:

```go
package main

import (
	"fmt"
	"strings"
)

func replaceInString(original, toBeReplaced, replacement string) string {
    return strings.Replace(original, toBeReplaced, replacement, -1)
}

func main() {
    original := "Mary had a X lamb."
    toBeReplaced := "X"
    replacement := "big"

    newString := replaceInString(original, toBeReplaced, replacement)
    fmt.Println("String after replacement:", newString)
}
```
