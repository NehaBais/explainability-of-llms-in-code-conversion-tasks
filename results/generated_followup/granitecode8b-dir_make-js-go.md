The error is because the `path/filepath` package is not used anywhere in the code, so it can be removed without affecting the functionality of the program.
The fix is to remove the import statement for `path/filepath`.
Here's the corrected code:
```go
package main

import (
	"os"
)
func mkdirp(path string) error {
	err := os.MkdirAll(path, os.ModePerm)
	if err != nil {
		return err
	}
	return nil
}
func main() {
	path := "./path/to/dir"
	err := mkdirp(path)
	if err != nil {
		panic(err)
	}
}
```

