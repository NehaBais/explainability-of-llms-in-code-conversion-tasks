Here is the equivalent code in Go:

```go
package main

import (
	"fmt"
)

func concatStrings(s1 string, s2 string) string {
	return s1 + s2
}

func main() {
	s := "hello"

	fmt.Printf("%s literal\n", s))

	/* or */
	fmt.Printf("%s%s\n", s, "literal"))

	s2 := concatStrings(s, " literal"))
	fmt.Println(s2))
	// Remember to free the memory allocated for s2
}
```
The Go version of the code does the same thing as the C version: it concatenates two string literals and stores the result in a string variable. 

However, Go language automatically manages memory, so there is no need for manual memory allocation like in the C version of the code. This makes the Go code simpler and more readable than the C version.
