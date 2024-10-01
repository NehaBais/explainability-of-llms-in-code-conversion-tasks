The equivalent Go code would be:

```go
package main

import (
	"os"
	"path/filepath"
)

func main() {
	if err := renameFile("input.txt", "output.txt"); err != nil {
		panic(err)
	}

	if err := renameDir("docs", "mydocs"); err != nil {
		panic(err)
	}

	// If you want to perform the same operation at root directory:
	// You can use filepath.Clean() function to remove any trailing slashes.
	root := filepath.Clean("/")
	if err := renameFile(filepath.Join(root, "input.txt"), filepath.Join(root, "output.txt")); err != nil {
		panic(err)
	}

	if err := renameDir(filepath.Join(root, "docs"), filepath.Join(root, "mydocs")); err != nil {
		panic(err)
	}
}

func renameFile(src, dst string) error {
	if _, err := os.Stat(src); err != nil {
		return err
	}
	return os.Rename(src, dst)
}

func renameDir(src, dst string) error {
	if _, err := os.Stat(src); err != nil {
		return err
	}
	return os.Rename(src, dst)
}
```
