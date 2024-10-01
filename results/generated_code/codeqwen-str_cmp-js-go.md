Below is the equivalent code in Golang:

```go
package main

import (
	"fmt"
	"strings"
)

func main() {
	fmt.Println(
		"abcd" == "abcd",                  // true
		"abcd" != "abcd",                  // false
		strings.Compare("abcd", "dcba") < 0, // true
		strings.Compare("abcd", "dcba") > 0, // false
		strings.EqualFold("ABCD", "abcd"),   // true (case insensitive)
	)
}
```

In Golang:
- The `==` operator is used to compare two values for equality. It's a case sensitive comparison. 
- The `!=` operator is used to determine if two operands are not equal. Like `==`, it's also a case sensitive comparison.
- The `strings.Compare()` function is used to compare two strings lexically (it does not perform case insensitive comparisons). It returns an integer: 0 if the arguments are equal, -1 if the first argument is less than the second, and 1 if the first argument is greater than the second.
- The `strings.EqualFold()` function is used for a case insensitive comparison. It takes two string arguments and returns true if they are equivalent in a case-insensitive manner.

Note that Go does not have built-in support for lexical comparison of numeric strings, so they would need to be converted to comparable types (e.g., integers) before comparing them with the `==` or `!=` operators.
