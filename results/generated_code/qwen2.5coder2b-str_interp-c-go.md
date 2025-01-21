To convert this C code to Golang, you can use string formatting as shown below:

```go
package main

import (
	"fmt"
)

func main() {
	extra := "little"
	fmt.Printf("Mary had a %s lamb.\n", extra)
	return
}
```

This is the equivalent function in Go. The `fmt.Printf` function is used for string formatting and output to the console. It takes a format string followed by variable arguments, which are substituted into the format string. In this case, it replaces "%s" with "little".
