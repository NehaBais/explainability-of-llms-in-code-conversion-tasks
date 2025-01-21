 The error is because the `path/filepath` package in Go was not used anywhere in the code. 

To fix the issue, remove the import line that reads `"path/filepath"` from the code as it's not necessary for creating directories and checking their existence in this particular case. So the corrected code would look like:

```go
package main

import (
	"fmt"
	"os"
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
