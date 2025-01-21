 Sure, here is the equivalent code in Golang:

```go
package main

import (
	"fmt"
	"os"
)

func main() {
	// Check for input.txt and docs in the current working directory
	currentWorkingDir := "."
	fmt.Println(isFileExists(currentWorkingDir + "/input.txt"))
	fmt.Println(isFileExists("/" + "input.txt"))
	fmt.Println(isDirExists(currentWorkingDir + "/docs"))
	fmt.Println(isDirExists("/" + "docs"))
}

func isFileExists(path string) bool {
	info, err := os.Stat(path)
	if os.IsNotExist(err) {
		return false
	}
	return !info.IsDir()
}

func isDirExists(path string) bool {
	info, err := os.Stat(path)
	if os.IsNotExist(err) {
		return false
	}
	return info.IsDir()
}
```

This Golang code performs the same checks as the provided Python code: it verifies whether `input.txt` is a file and whether `docs` is a directory, both in the current working directory and in the filesystem root.
