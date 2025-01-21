The error in the Go code is due to the import statement at the beginning of the file. In Go, we don't need quotes around imported packages, so we just need to remove them from the line `"path/filepath"` to `path/filepath`. 

Rewrite the corrected code in a single code block:
```go
package main

import (
	"os"
	path "path/filepath"
)

func mkdirp(path string) error {
	return os.MkdirAll(path, 0755)
}

func main() {
	err := mkdirp("./path/to/dir")
	if err != nil {
		panic(err)
	}
}
```
