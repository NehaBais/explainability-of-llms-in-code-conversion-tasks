The equivalent Go code for this task would be:

```go
package main

import (
	"fmt"
	"os"
)

func mkdirp(path string) error {
	if err := os.MkdirAll(path, 0755); err != nil {
		return err
	}
	fmt.Printf("Directory created or already exists: %s\n", path)
	return nil
}

func main() {
	path := "./path/to/dir"
	err := mkdirp(path)
	if err != nil {
		fmt.Println(err)
	}
}
```
This function works similarly to the Python version. The `os.MkdirAll` function creates a directory and any necessary parent directories, with a permission of 0755 for each folder created. If the directory already exists, it will return without an error.
The example usage in main prints "Directory created or already exists: ./path/to/dir" to the console.
