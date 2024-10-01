Here is the equivalent code in Golang:

```go
package main

import (
	"fmt"
)

func main() {
	var s = "hello"
	var s2 string = s + " literal"

	// or
	s2 = fmt.Sprintf("%s literal", s)

	fmt.Println(s, "\n", s2)
}
```
