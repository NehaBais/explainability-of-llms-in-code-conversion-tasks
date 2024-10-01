```go
package main

import (
	"fmt"
	"strings"
)

func main() {
	myStrings := []string{"prepended to", "my string"}
	prepended := strings.Join(myStrings, "")
	fmt.Println(prepended)
}
```

This is the equivalent code in Go. We are using the `strings.Join` function to concatenate all elements of the slice into a single string with no separator. The output will be the same as your original C++ program: "prepended my string".
