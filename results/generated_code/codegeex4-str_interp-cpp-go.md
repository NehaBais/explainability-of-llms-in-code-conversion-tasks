In Go, the equivalent code would be:

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
	fmt.Println("String after replacement: ", newString)
}
```

In Go's `strings` package, the function `Replace` replaces all occurrences of a substring in a string. It takes five arguments - the original string, the substring to replace, the replacement for the substring, and the maximum number of replacements to make (in this case, 1 to only replace one occurrence).

Note: Go doesn't have built-in support for string interpolation as C++, but it does provide powerful tools for string manipulation that allow you to accomplish similar tasks.
