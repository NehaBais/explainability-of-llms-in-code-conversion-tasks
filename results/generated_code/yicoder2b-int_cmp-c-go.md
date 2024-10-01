Sure, here's the equivalent code in Golang:

```go
package main

import (
	"fmt"
)

func main() {
	var a int
	var b int
	fmt.Scan(&a, &b)
	if a < b {
		fmt.Printf("%d is less than %d\n", a, b)
	}
	if a == b {
		fmt.Printf("%d is equal to %d\n", a, b)
	}
	if a > b {
		fmt.Printf("%d is greater than %d\n", a, b)
	}
}
```
Here, the Scan function from standard input package (stdin) is used to take user input for `a` and `b` variables, equivalent to &a and &b in C. 
The if statements are the equivalent of the original code: they check whether `a` is less than, equal to or greater than `b`.
