```go
package main

import (
	"fmt"
	"io/ioutil"
	"os"
)

func createFile(root string, filename string, size int64) error {
	filePath := root + filename
	if err := ioutil.WriteFile(filePath, make([]byte, size), 0); err != nil {
		return fmt.Errorf("failed to create file: %w", err)
	}
	fmt.Printf("Created empty file %s\n", filePath)
	return nil
}

func main() {
	createFile(".", "output.txt", 0)
	createFile("/", "docs")
}
```
