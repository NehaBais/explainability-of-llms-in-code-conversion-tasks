 Here is the equivalent Go code for your Python code:

```Go
package main

import (
	"fmt"
	"strings"
)

func main() {
	var s1 string = "hello"
	s2 := s1 + " world"
	fmt.Println(s1, s2)

	slice := []string{s1, "world", "mom"}
	s3 := strings.Join(slice, ", ")
	fmt.Println(s3)
}
```

In the Go code above:
- `var` keyword is used to declare a variable and assign it an initial value. Unlike Python, in Go we need to specify the type of variables when we declare them.
- In line 5, the `+=` operator is used for string concatenation instead of `=` which is typically used for integer addition.
- We use the `strings.Join` function to combine elements of a slice with a specified separator (in this case ", ").
