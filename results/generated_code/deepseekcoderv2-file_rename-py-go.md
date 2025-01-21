 Sure, here is the equivalent code in Golang:

```go
package main

import (
	"fmt"
	"os"
)

func main() {
	// Rename in current working directory
	err := os.Rename("input.txt", "output.txt")
	if err != nil {
		fmt.Println("Error renaming file:", err)
	}
	err = os.Rename("docs", "mydocs")
	if err != nil {
		fmt.Println("Error renaming directory:", err)
	}

	// Rename in filesystem root
	err = os.Rename(string(os.PathSeparator)+"input.txt", string(os.PathSeparator)+"output.txt")
	if err != nil {
		fmt.Println("Error renaming file in root:", err)
	}
	err = os.Rename(string(os.PathSeparator)+"docs", string(os.PathSeparator)+"mydocs")
	if err != nil {
		fmt.Println("Error renaming directory in root:", err)
	}
}
```

This Golang code performs the same operations as your Python code, renaming `input.txt` to `output.txt` and `docs` to `mydocs`, both within the current working directory and at the filesystem root.
