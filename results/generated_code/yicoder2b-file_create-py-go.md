The equivalent code in Golang would be:

```golang
package main
import (
	"fmt"
	"os"
	"path/filepath"
)
func create(directory string, filename string) {
	_, err := os.Create(filepath.Join(directory, filename))
	if err != nil {
		fmt.Printf("Failed to Create file: %s\n", err)
		return
	}

	os.Mkdir(filepath.Join(directory, "docs"), 0755)
}
func main() {
	create(".", "output.txt") // current directory
	create("/", "output.txt")  // root directory
}
```
In Golang, the `filepath.Join()` function is used to combine path elements into a single path. The `os.Create()` function creates a file with the specified name and optional permissions. If the file already exists it will not be overwritten. `os.Mkdir()` creates a directory with the specified name and permissions.
