 Below is the equivalent Golang code for creating a directory and any missing parent directories.

```go
package main

import (
	"fmt"
	"os"
	"path/filepath"
)

func createDir(dir string) error {
	_, err := os.Stat(dir)
	if err == nil { // dir already exists
		return nil
	} else if os.IsNotExist(err) { // dir does not exist
		return os.MkdirAll(dir, 0755)
	} else {
		return fmt.Errorf("error creating directory: %s", err)
	}
}

func main() {
	args := os.Args[1:] // get arguments passed to the command
	if len(args) != 1 {
		fmt.Println("usage: mkdir <path>")
		return
	}

	pathToCreate := args[0]
	err := createDir(pathToCreate)
	if err != nil {
		fmt.Printf("couldn't create directory: %s\n", pathToCreate)
		return
	}
}
```

In this code, the function `createDir` checks if the specified directory exists or not. If it does exist, the function returns successfully. If not, it creates all parent directories and then the target directory using `os.MkdirAll`. If there is any error during these operations, an error message will be printed to the standard output (terminal). 

In the `main` function, we get the path passed as command-line argument and call the `createDir` function with this path. If anything goes wrong (like if the path already exists or if there is any error creating directories), an error message will be printed to the standard output.
