Here is the equivalent code in Golang:

```go
package main 

import (
	"fmt"
	"os"
)

func checkFile(filePath string) {
	exists := false

	if _, err := os.Stat(filePath); !os.IsNotExist(err) {
		exists = true
	}
	fmt.Printf("The file %s exists: %t\n", filePath, exists)
}

func checkDirectory(dirPath string) {
	exists := false

	info, err := os.Stat(dirPath)
	if !os.IsNotExist(err) && info.IsDir() {
		exists = true
	}
	fmt.Printf("The directory %s exists: %t\n", dirPath, exists)
}

func main() {
	checkFile("./input.txt")
	checkFile("/input.txt")

	checkDirectory("./docs")
	checkDirectory("/docs")
}
```

In this code:

- `os.Stat()` is used to get the file status. If no error is returned then the path exists.
- `os.IsNotExist(err)` checks if the error was due to the file or directory not existing.
- `info.IsDir()` checks if the given file path points to a directory.
