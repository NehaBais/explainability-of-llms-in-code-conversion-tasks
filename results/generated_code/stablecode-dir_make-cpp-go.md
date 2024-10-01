Below is the Go version of your C++ code:

```go
package main

import (
	"fmt"
	"os"
	"path/filepath"
)

func CreateDirectory(path string) error {
	if _, err := os.Stat(path); err == nil {
		return nil // directory already exists, so return successfully
	}

	err := os.MkdirAll(path, 0755))

	if err != nil {
		fmt.Printf("couldn't create directory: %s\n", path))
		return err
	}

	return nil
}

func main() {
	if len(os.Args) != 2 {
		fmt.Println("usage: mkdir <path>")
		return
	}

	err := CreateDirectory(os.Args[1]))

	if err != nil {
		fmt.Printf("An error occurred while trying to create the directory: %s\n", os.Args[1]))
		return
	}
	
	fmt.Printf("Directory created successfully at: %s\n", os.Args[1]))
	return
}
```
This Golang version of your C++ code will create a directory and any missing parents. If the directory already exists, it returns successfully. This implementation works equally well on cross-platform systems.
