The error message is indicating that there's an unexpected character "?" being used instead of a comma or parenthesis after the ternary operator in the print statements.

To fix this, replace all occurrences of "yes" with `(b ? "yes" : "no")`.

Here is the corrected code:
```go
package main

import (
	"fmt"
	"os"
	"path/filepath"
)

func checkRegularFile(path string) bool {
	info, err := os.Stat(path)
	if err != nil {
		return false
	}
	return !info.IsDir()
}

func checkDirectory(path string) bool {
	info, err := os.Stat(path)
	if err != nil {
		return false
	}
	return info.IsDir()
}

func main() {
	cwd := "."

	fmt.Printf("input.txt is a regular file? %s\n", (checkRegularFile(filepath.Join(cwd, "input.txt")) ? "yes" : "no"))
	fmt.Printf("docs is a directory? %s\n", (checkDirectory(filepath.Join(cwd, "docs")) ? "yes" : "no"))

	root := "/"
	if runtime.GOOS == "windows" {
		root = `C:\` // replace with the root drive letter on your system
	}

	fmt.Printf("/input.txt is a regular file? %s\n", (checkRegularFile(filepath.Join(root, "input.txt")) ? "yes" : "no"))
	fmt.Printf("/docs Is a directory? %s\n", (checkDirectory(filepath.Join(root, "docs")) ? "yes" : "no"))
}
```
