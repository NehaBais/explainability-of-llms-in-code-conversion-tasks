Answer: In Golang, you can use the os package to create directories and handle errors. Here's how you can convert the given Java code to Golang:

```go
package main

import (
	"fmt"
	"os"
)

func CreateDir(path string) error {
	err := os.MkdirAll(path, 0755) // Create all directories in path if they don't exist
	if err != nil {
		return fmt.Errorf("failed to create directory: %v", err)
	}
	return nil
}

func main() {
	err := CreateDir("./parent/test")
	if err != nil {
		fmt.Println(err)
	} else {
		fmt.Println("Directory created successfully.")
	}
}
```
This Golang code creates a directory named "parent" with an additional subdirectory "test". It also handles any errors that may occur during the process, and returns them as needed.
