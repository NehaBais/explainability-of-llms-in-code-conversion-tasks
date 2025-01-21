The equivalent Golang code would look like this:

```go
package main

import (
	"fmt"
	"os"
)

const FILE_NAME string = "output.txt"
const DIR_NAME string = "docs"

func create(root string) (err error) {
	filePath := root + "/" + FILE_NAME
	dirPath := root + "/" + DIR_NAME

	err = os.Mkdir(dirPath, 0755)
	if err != nil && !os.IsExist(err) {
		return fmt.Errorf("failed to create directory: %v", err)
	}

	err = os.Create(filePath)
	if err != nil {
		return fmt.Errorf("failed to create file: %v", err)
	}

	return
}

func main() {
	err := create(".")
	if err != nil {
		fmt.Println(err.Error())
		os.Exit(1)
	}

	err = create("/")
	if err != nil {
		fmt.Println(err.Error())
		os.Exit(1)
	}
}
```
The Go equivalent uses the `os.Mkdir` function to make directories and `os.Create` function to create files. The `Mkdir` function returns an error if the directory already exists, and the `Create` function returns an error if the file already exists. In case of such errors, they are printed out and program exits with a non-zero exit code.
