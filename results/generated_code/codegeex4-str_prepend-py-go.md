In Go, you can achieve this by using the `+` operator which is used for string concatenation. The equivalent code in Golang would look like:

```go
package main

import (
	"fmt"
)

func main() {
	s := "12345678"
	s = "0" + s // by concatenation
	fmt.Println(s)
}
```

You can save this in a file with `.go` extension and run it using `go run filename.go`.
