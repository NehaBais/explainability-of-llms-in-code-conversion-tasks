Sure, here is the equivalent code in Golang:

```go
package main

import (
	"os"
)

func main() {
	dirs := []string{"./docs", "/docs"}

	for _, dir := range dirs {
		err := os.Mkdir(dir, 0750)
		if err != nil && !os.IsExist(err) {
			panic("Error creating directory: " + err.Error())
		}
	}

	fh, err := os.Create("output.txt")
	if err != nil {
		panic("Error creating file: " + err.Error())
	}
	defer fh.Close()

	err = fh.Truncate(0)
	if err != nil {
		panic("Error truncating file: " + err.Error())
	}
}
```

### Explanation:
1. **Create Directory (`mkdir`)**:
   - The `os.Mkdir()` function is used to create directories.
   - We are creating two directories: one in the current working directory (`.docs`) and another in the filesystem root (`/docs`).
   
2. **Create File (`output.txt`)**:
   - `os.Create()` is used to create a new file named "output.txt" with write-only permissions.
   - The `Truncate(0)` method ensures that the file size is set to 0 bytes.

### Notes:
- Golang's `os` package handles errors gracefully, and we use the `panic` function to handle any critical errors.
- When creating a directory in the root filesystem (`/docs`), ensure you have appropriate permissions.
- The `defer fh.Close()` ensures that the file is closed after its contents are written, even if an error occurs.
