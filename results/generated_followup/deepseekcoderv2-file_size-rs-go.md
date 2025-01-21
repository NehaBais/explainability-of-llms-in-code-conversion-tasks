 The error indicates that the Go file contains an import for `"io"` which is not used within the script, violating the rule of using imports to avoid unused imports.

The fix involves removing the unused import. Here's the corrected code in a single code block:

```go
package main

import (
	"fmt"
	"os"
)

func main() {
	if len(os.Args) < 2 {
		fmt.Fprintln(os.Stderr, "Error: No file name supplied")
		os.Exit(1)
	}

	file := os.Args[1]
	info, err := os.Stat(file)
	if err != nil {
		fatal("Could not get file info", err)
	}

	fmt.Printf("Size of %s is %d bytes\n", file, info.Size())
}

func fatal(msg string, err error) {
	fmt.Fprintf(os.Stderr, "Error: %s: %v\n", msg, err)
	os.Exit(2)
}
```
