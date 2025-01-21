The error occurs because the `filepath` package is imported, but it's not used anywhere in the program.

Fixing this problem requires removing the `filepath` import as it's not being used.

Here's the corrected code:

```go
package main

import (
	"fmt"
	"os"
)

func createDir(dirPath string) error {
	err := os.MkdirAll(dirPath, 0755)
	if err != nil && !os.IsExist(err) {
		return fmt.Errorf("couldn't create directory %s: %w", dirPath, err)
	}
	return nil
}

func main() {
	path := "./path/to/dir"
	if err := createDir(path); err != nil {
		fmt.Printf("Failed to create directories: %v\n", err)
	} else {
		fmt.Printf("Directory created successfully: %s\n", path)
	}
}

```
