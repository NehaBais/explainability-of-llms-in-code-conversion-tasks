 Sure, here is the equivalent code in Golang:

```go
package main

import (
	"fmt"
	"os"
)

func handleError(err error) {
	if err != nil {
		fmt.Println("Error:", err)
	}
}

func main() {
	// Create file in current working directory
	file, err := os.Create("output.txt")
	handleError(err)
	file.Close()

	// Create file in root directory
	file, err = os.Create("/output.txt")
	handleError(err)
	file.Close()

	// Create directory in current working directory
	err = os.Mkdir("docs", 0755)
	handleError(err)

	// Create directory in root directory
	err = os.Mkdir("/docs", 0755)
	handleError(err)
}
```

This Golang code does the following:
1. Creates an empty file named "output.txt" in both the current working directory and the filesystem root.
2. Creates an empty directory named "docs" in both the current working directory and the filesystem root.
