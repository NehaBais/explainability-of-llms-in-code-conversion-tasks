Error: `undefined: errorIsNotFound, createParentDirIfNotExists, fileExist`

Fix: Import missing packages: `import "errors"`

Corrected code:
```go
package main

import (
	"os"
	"syscall"

	"errors"
)

func renameFile(src, dest string) {
	_, err := os.Rename(src, dest)
	if err != nil {
		if errors.IsNotFound(err) {
			createParentDirIfNotExists(dest)
			if !fileExist(dest) {
				syscall.Rename(src, dest)
			}

		} else if errors.IsPermission(err) {
			// handle permission denied error
		} else {
			// handle other errors like file already exist etc.
		}
	}
}

func main() {
	renameFile("input.txt", "output.txt")
	renameFile("docs", "mydocs")
	renameFile("/input.txt", "/output.txt")
	renameFile("/docs", "/mydocs")
}
```
