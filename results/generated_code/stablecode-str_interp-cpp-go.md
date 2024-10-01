Here is the equivalent Go code for your C++ requirement. It uses strings.Replace() function to replace "X" with "little".

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

	newString := strings.Replace(original, toBeReplaced, replacement)

	fmt.Printf("String after replacement: %s\n", newString))
}
```
This Go code does exactly the same thing as your C++ code. It finds a given string pattern (in this case "X"), and replaces it with another string ("little"). This process is repeated for all occurrences of the specified pattern in the original string. The result is a modified version of the original string where every occurrence of the specified pattern has been replaced by the specified replacement string.
