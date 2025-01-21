Here is the equivalent code in Golang:

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

In this code, `Printf` function from `fmt` package is used which does string interpolation similar to C's `printf`. `%s` in the string denotes where the value of `extra` should be substituted.
