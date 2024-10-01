 In Golang, the function can be written as follows:

```go
package main

import (
	"fmt"
)

func logic(a bool, b bool) {
	fmt.Printf("a AND b: %v\n", a && b)
	fmt.Printf("a OR b: %v\n", a || b)
	fmt.Printf("NOT a: %v\n", !a)
}
```
This function takes two boolean parameters and performs the logical operations "and", "or" and "not". The results are then printed to the console using fmt.Printf.
