Below is the equivalent Golang code for your provided Rust program. This function creates an empty file and directory in specified paths.

```go
package main

import (
	"fmt"
	"os"
)

const FILE_NAME = "output.txt"
const DIR_NAME = "docs"

func create(root string) error {
	dir := root + "/" + DIR_NAME
	err := os.Mkdir(dir, 0755)
	if err != nil && !os.IsExist(err) {
		return err
	}
	filePath := root + "/" + FILE_NAME
	_, err = os.Create(filePath)
	return err
}

func main() {
	err := create(".")
	if err != nil {
		fmt.Println("Error: ", err)
		os.Exit(1)
	}
	err = create("/")
	if err != nil {
		fmt.Println("Error: ", err)
		os.Exit(1)
	}
}
```

This code creates "output.txt" files and a "docs" directory twice, once in the current working directory (.) and once in the root ("/") of the filesystem. The function `create` accepts a path and attempts to create a directory with name "docs" and a file with name "output.txt". If these actions fail due to an error other than an already existing directory, it returns that error. In the main function, we call this `create` function twice - first for current working directory and then for root filesystem path.
