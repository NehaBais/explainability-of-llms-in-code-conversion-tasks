Below is the equivalent code in Golang. This implementation is based on os package and path/filepath.

```go
package main

import (
	"fmt"
	"os"
	"path/filepath"
)

func mkdirp(path string, cb func()) {
	cb = cb || func() {} // in Golang there's no need to check if the callback is nil

	// Resolve the path
	path, err := filepath.Abs(path)
	if err != nil {
		fmt.Println("Error resolving path:", err)
		return
	}

	err = os.MkdirAll(path, 0755) // Create directory and all parent directories, with mode 755
	if err != nil && !os.IsExist(err) {
		fmt.Println("Error creating directory:", err)
	} else if cb != nil {
		cb()
	}

}

func main() {
	mkdirp("./path/to/dir", func() {
		fmt.Println("Directory created successfully.")
	})
}
```

This code uses `os.MkdirAll()` to create a directory and all its parent directories if they do not exist, with mode 755 (read-write for owner, read-only for others). If an error occurs other than "file already exists", it prints the error message.
