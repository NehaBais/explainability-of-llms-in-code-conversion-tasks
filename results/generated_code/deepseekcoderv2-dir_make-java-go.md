 Sure, here's the equivalent code in Go that creates a directory and any missing parent directories:

```go
package main

import (
	"fmt"
	"os"
)

func createDir(path string) error {
	err := os.MkdirAll(path, os.ModePerm)
	if err == nil {
		fmt.Println("Path successfully created")
	}
	return err
}

func main() {
	err := createDir("C:/parent/test")
	if err != nil {
		fmt.Println("Error:", err)
	}
}
```

This Go code uses the `os` package to create the directory and any missing parent directories using `MkdirAll`. If the operation is successful, it prints a message indicating that the path was successfully created. If there's an error (e.g., if the directory already exists), it will handle the error accordingly.
