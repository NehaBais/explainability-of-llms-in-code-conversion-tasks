In Go, there's a built-in function to create directories `os.MkdirAll()` . Here is the translated code.

```Go
package main

import (
	"errors"
	"os"
	"path/filepath"
)

// Mkdirp creates all directories in path, if they do not already exist.
func Mkdirp(path string, mode os.FileMode) error {
    absPath, err := filepath.Abs(path)
    if err != nil {
        return errors.New("Invalid Path: " + path)
    }
	return os.MkdirAll(absPath, mode)
}
```
This `os.FileMode` parameter defines the permission of directories that are created. You can set it to 0755 if you wish or leave it as is for the default value (0700).
