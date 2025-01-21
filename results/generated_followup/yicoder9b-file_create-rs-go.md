The error occurred because although "io/ioutil" is imported it's not used anywhere in the code hence causing an unused import error. 

We can fix this by removing the unnecessary imported package as we aren't using any function from ioutil in our program currently. 

Below is the corrected GoLang code:
```go
package main

import (
	"fmt"
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
