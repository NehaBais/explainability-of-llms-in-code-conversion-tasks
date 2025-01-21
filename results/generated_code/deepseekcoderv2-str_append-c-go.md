 Here's the equivalent Go code for the given C code:

```go
package main

import (
	"fmt"
)

func main() {
	str := "Good Morning"
	cstr := " to all"
	cstr2 := " !!!"

	// Append the strings together in a idiomatic way
	str += cstr + cstr2

	fmt.Println(str)
}
```

In Go, string concatenation is done using the `+` operator, which works seamlessly with strings and other string literals. This makes the code more readable and idiomatic compared to C's `strcat` or manual indexing manipulation like in the second method of your original code.
