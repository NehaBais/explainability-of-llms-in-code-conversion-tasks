 Sure, here is the equivalent code in Golang:

```go
package main

import (
	"fmt"
)

func main() {
	extra := "little"
	fmt.Printf("Mary had a %s lamb.\n", extra)
}
```

In this Go code, we define the `extra` variable with the string "little". We then use the `fmt.Printf` function to perform string interpolation by replacing the placeholder `%s` in the format string with the value of `extra`.
