In Go, you can use the `os` package to handle file system operations. Here is how you can implement your C++ code:

```go
package main

import (
	"os"
)

func renameFile(oldName string, newName string) {
	err := os.Rename(oldName, newName)
	if err != nil {
		panic(err)
	}
}

func main() {
	cwd, _ := os.Getwd()
	renameFile(cwd+"/input.txt", cwd+"/output.txt")
	renameFile(cwd+"/docs", cwd+"/mydocs")

	root := "/"
	renameFile(root+"input.txt", root+"output.txt")
	renameFile(root+"docs", root+"mydocs")
}
```

Here, we first define a function `renameFile` that takes two parameters - the current name and new name of the file or directory. This function uses Go's built-in `os.Rename()` function to rename files and directories. If renaming fails for any reason (for instance if a directory is not empty), the program will panic.

The `main` function first gets the current working directory using `os.Getwd()`. It then calls the `renameFile` function to rename "input.txt" to "output.txt" and "docs" to "mydocs" in both the current working directory and the root directory ("/").
