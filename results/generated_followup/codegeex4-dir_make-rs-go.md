The error indicates that the `filepath` package was imported but never used, which is not an issue per se unless you plan to use functions from that package later.

The fix involves either using the imported package or removing it if not needed.

Here's the corrected code:
```go
package main

import (
	"log"
	"os"
)

func createDir(dirPath string) error {
	err := os.MkdirAll(dirPath, 0755)
	if err != nil {
		return err
	}

	log.Printf("Directory %s created successfully\n", dirPath)
	return nil
}

func main() {
	dirPath := "./path/to/dir"
	err := createDir(dirPath)
	if err != nil {
		log.Fatalf("An error occurred: %v", err)
	}
}
```
