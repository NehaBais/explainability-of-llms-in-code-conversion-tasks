Below is the Golang version of your C code. Note that error handling and other aspects have been simplified compared to the original C implementation:

```go
package main

import (
	"fmt"
	"os"
	"path/filepath"
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

This code creates a directory and all its parents if they don't exist. It uses the built-in `os.MkdirAll()` function which does exactly what you want without having to implement it yourself. The function returns an error if there was any problem creating the directories, or if one of them already existed but was not a directory.
