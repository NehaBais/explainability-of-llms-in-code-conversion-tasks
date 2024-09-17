## Solution:

```go
package main

import (
	"fmt"
)

func main() {
	var a, b int
	_, err := fmt.Scanf("%d %d", &a, &b)
	if err != nil {
		fmt.Println("Invalid input")
		return
	}
	// test for less-than
	if a < b {
		fmt.Printf("%v is less than %v\n", a, b)
	}
	// test for equality
	if a == b {
		fmt.Printf("%v is equal to %v\n", a, b)
	}
	// test for greater-than
	if a > b {
		fmt.Printf("%v is greater than %v\n", a, b)
	}
}
```

