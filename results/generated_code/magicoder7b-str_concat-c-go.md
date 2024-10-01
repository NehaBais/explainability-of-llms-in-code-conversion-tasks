 In Go language, you can use the `+` operator to concatenate strings. Here is a conversion of your C code:

```go
package main

import (
	"fmt"
	"strings"
)

func sconcat(s1 string, s2 string) string {
	return s1 + s2
}

func main() {
	s := "hello"
	
	// Print the original variable
	fmt.Println(s)
	
	// Or print with another string literal
	fmt.Printf("%s%s\n", s, " literal")
	
	// Concatenate and save in another variable
	s2 := sconcat(s, " literal")
	
	// Print the result
	fmt.Println(s2)
}
```

In Go, you can easily concatenate strings using the `+` operator like Python. There is no need for a separate function to handle this operation because it's already built into the language. The second argument in the `fmt.Printf` call can be another string literal which is just concatenated with s.
