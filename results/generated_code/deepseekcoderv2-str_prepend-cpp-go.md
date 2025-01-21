 Sure, here is the equivalent code in Golang:

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

Explanation:
1. We define a slice of strings `myStrings` containing the values `"prepended to"` and `"my string"`.
2. We use the `strings.Join` function to concatenate all elements in the slice into a single string, with no separator (`""`).
3. Finally, we print the concatenated string using `fmt.Println`.
