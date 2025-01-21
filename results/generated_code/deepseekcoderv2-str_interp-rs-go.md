 Sure, here is the equivalent code in Golang for string interpolation:

```go
package main

import (
	"fmt"
)

func main() {
	fmt.Printf("Mary had a %s lamb\n", "little")
	// You can specify order
	fmt.Printf("%s had a %s lamb\n", "Mary", "little")
	// Or named arguments if you prefer
	fmt.Printf("%s had a %s lamb\n", fmt.Sprintf("%s", "Mary"), fmt.Sprintf("%s", "little"))
}
```

In Golang, the `fmt` package provides functions for formatted I/O, and you can use `fmt.Sprintf` to format strings dynamically. The syntax is similar to Rust's string interpolation but uses Go's own formatting capabilities.
