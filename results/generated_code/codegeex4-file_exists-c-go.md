In Go, you can use the `os` and `path/filepath` packages to achieve similar functionality. Here is how you can convert the given C code into Go.

```go
package main

import (
	"fmt"
	"os"
	"path/filepath"
)

func checkReg(path string) bool {
	info, err := os.Stat(path)
	if os.IsNotExist(err) || !info.Mode().IsRegular() {
		return false
	}
	return true
}

func checkDir(path string) bool {
	info, err := os.Stat(path)
	if os.IsNotExist(err) || !info.IsDir() {
		return false
	}
	return true
}

func main() {
	fmt.Printf("input.txt is a regular file in current directory? %s\n", strconv.FormatBool(checkReg("input.txt")))
	fmt.Printf("docs is a directory in current directory? %s\n", strconv.FormatBool(checkDir("docs")))

	root := "/"
	inputFileInRoot := filepath.Join(root, "input.txt")
	docsInRoot := filepath.Join(root, "docs")

	fmt.Printf("%s is a regular file in root? %s\n", inputFileInRoot, strconv.FormatBool(checkReg(inputFileInRoot)))
	fmt.Printf("%s is a directory in root? %s\n", docsInRoot, strconv.FormatBool(checkDir(docsInRoot)))
}
```

This Go code does the following:

- Defines two functions `checkReg` and `checkDir`, which mirror the C functions for checking regular files and directories. It uses the `os.Stat` function to get file info and checks if the returned error is not nil or if the mode of the file/directory indicates it's not a regular file/directory.

- In the `main` function, it checks if "input.txt" and "docs" are regular files and directories in the current directory using the above functions. 

- It also constructs paths to "input.txt" and "docs" in the root directory using `filepath.Join`, then uses the same checkReg and checkDir functions to verify their properties there.

Finally, it prints these verifications out using `fmt.Printf` for displaying results.
