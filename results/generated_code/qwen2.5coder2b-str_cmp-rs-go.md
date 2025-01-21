To convert the given Rust code to Golang, you would first need to import the necessary packages. Here's a translation of the provided code:

```go
package main

import (
	"strings"
)

func main() {
	// only same types can be compared
	a := "abc"   // string
	b := "Bac"   // string

	// Strings are coerced to []byte when borrowed and needed
	if strings.EqualFold(a, b) {  // equality ignoring case
		println("The strings are equal")
	}

	// everything else, create []byte, then compare as above
	a2 := []byte(a)
	b2 := []byte(b)

	// repeat checks

}
```

In this Golang code:
- We use the `strings` package for string comparisons.
- The equality check is performed using `strings.EqualFold`, which performs a case-insensitive comparison.
- Note that converting Rust's case insensitive equality to Go is slightly different due to Go's handling of bytes instead of characters.
