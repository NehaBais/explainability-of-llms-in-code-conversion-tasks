Here's the equivalent code in Go:

```go
package main

import (
	"fmt"
	"strings"
)

func compareStrings(A, B string) {
	equal := strings.EqualFold(A, B)

	fmt.Printf("'%s' and '%s' are exact equal: %t\n", A, B, equal))

	fmt.Printf("'%s' is lexically ordered before '%s': %t\n", A, B, strings.Compare(A, B) < 0)))

	fmt.Printf("'%s' is lexically ordered after '%s': %t\n", A, B, strings.Compare(A, B) > 0)))
}

func main() {
	compareStrings("Hello", "hello")
	compareStrings("5", "5.0")
	compareStrings("java", "Java")
	compareStrings("ĴÃVÁ", "ĴÃVÁ")
	compareStrings("ĴÃVÁ", "ĵãvá")
}
```

This Go code demonstrates the comparison of two strings in Go. It uses the `strings` package to perform string comparisons. The code includes examples that demonstrate exact equality, case-insensitive lexical equality, and lexical ordering.
