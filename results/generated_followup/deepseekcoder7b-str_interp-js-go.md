The error occurs because of incorrect escape characters in Go's printf-style string formatting syntax. The correct strings.Replace function call in Go would be `fmt.Printf("Original: %s\nReplaced: %s\n", original, replaced)`. It is used to print out the original and final strings with a newline character in between them, following printf-style formatting rules.

Here's how you can rewrite your corrected code block:

```go
package main

import (
	"fmt"
	"strings"
)

func main() {
	original := "Mary had a X lamb"
	little := "big"
	replaced := strings.Replace(original, "X", little, -1)  //replace all instances of X in original string with big

	fmt.Printf("Original: %s\nReplaced: %s\n", original, replaced)
}
```

