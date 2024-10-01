 In Go, you can achieve the same result using the `strings.Join` function to concatenate all strings in the slice. Here's how your code would look:

```go
package main

import (
	"fmt"
	"strings"
)

func main() {
	myStrings := []string{"prepended to", "my string"}
	var prepended = strings.Join(myStrings, "")
	fmt.Println(prepended)
}
```
