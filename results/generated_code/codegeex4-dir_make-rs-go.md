```go
package main

import (
	"log"
	"os"
	"path/filepath"
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

In this Go code, the function `createDir` is used to create a directory and any missing parents. The `os.MkdirAll` function from the os package takes care of creating the necessary directories if they don't exist. The mode of 0755 is provided which means that the owner can read, write, and execute, while others can only read and execute.

Then, in the main function, a call to this function with your desired directory path as the argument is made. Any errors encountered during the creation of directories are logged and printed out. If there is no error, a success message is logged.
