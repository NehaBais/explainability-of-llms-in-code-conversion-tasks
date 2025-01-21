The error `undefined: strings` occurs because Go does not have a standard package for string manipulation like JavaScript's String.prototype.replace. To use this method, you need to import the `strings` package from Go.

Here is the corrected code:

```go
package main

import (
	"fmt"
	"strings"
)

func main() {
	var original = "Mary had a X lamb"
	var little = "little"

	replaced := fmt.Sprintf("%s", original)
	replaced = strings.Replace(replaced, "X", little, -1) // Replace all occurrences

	fmt.Println("Original string:", original)
	fmt.Println("Replaced string:", replaced)
}
```
