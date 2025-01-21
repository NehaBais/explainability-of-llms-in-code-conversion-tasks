The error message indicates that there is a newline character (`\n`) or an unexpected newline in the string literals that are causing syntax errors when compiled with Go.

To fix this, we need to remove the newlines from the string literals. We can use the `fmt.Sprintf` function to convert strings and ensure there are no newlines.

Here's the corrected code:

```go
package main

import (
	"fmt"
	"os"
)

func getFileSize(filename string) {
	if _, err := os.Stat(filename); err == nil {
		fmt.Printf("Size of file %s is %d bytes.
", filename, os.Size(filename))
	} else if os.IsNotExist(err) {
		fmt.Println(err)
	} else {
		fmt.Printf("Error occurred while getting size: %v
", err)
	}
}

func main() {
	getFileSize("input.txt")
	getFileSize("/input.txt")
}
```
