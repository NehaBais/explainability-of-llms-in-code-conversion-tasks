The error message is indicating that there are some special characters causing syntax issues which aren't part of Go language grammar. The lines with the comments beginning with "//" are not valid in Go, they must be enclosed within `/*` and `*/` brackets to form a comment block. Also, methods or functions should start with an alphabet character (A-Z or a-z) or an underscore (_), so removing that portion would also solve the error.

Here's the corrected Go code: 
```go
package main

import (
	"fmt"
)

func main() {
	var a, b int
	n, err := fmt.Scan(&a, &b)
	if n != 2 || err != nil {
		fmt.Println("could not read the numbers")
		return 
	}
  
	// test for less-than
	if a < b {
		fmt.Printf("%d is less than %d\n", a, b)
	}
  
	// test for equality
	if a == b {
		fmt.Printf("%d is equal to %d\n", a, b)
	}

  // test for greater-than
	if a > b {
		fmt.Printf("%d is greater than %d\n", a, b)
	}
}
```

