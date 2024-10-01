The equivalent GoLang code for the given Rust program is as follows. Please note that in GoLang there's no direct way to achieve the exact same functionality but with similar steps:

```go
package main

import (
	"fmt"
	"io/ioutil"
	"os"
	"path/filepath"
)

func create(root string) {
	dir := filepath.Join(root, "docs")
	file := filepath.Join(root, "output.txt")
	if err := os.MkdirAll(dir, 0750); err != nil {
		errorHandler(err)
	}
	if _, err := os.Create(file); err != nil {
		errorHandler(err)
	}
}
func errorHandler(e error) {
	fmt.Fprintf(os.Stderr, "%v\n", e)
	os.Exit(1)
}
func main() {
	create(".")
	create("/")
}
```
This GoLang program does the following:
- It joins the root directory with 'docs' and 'output.txt' using `filepath.Join` function. 
- `os.MkdirAll` creates a directory at specified path, it also creates all the parent directories if they don't exist.
- `os.Create` is used to create an empty file.
- If any error occurs during these operations, it will be handled in the `errorHandler` function which prints out the error and terminates the program with a non-zero exit code.
