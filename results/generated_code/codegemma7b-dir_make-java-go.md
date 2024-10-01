```go
import (
	"os"
)

func mkdirp(path string) error {
	return os.MkdirAll(path, 0755)
}
```

**Usage:**

err := mkdirp("./path/to/dir")
if err != nil {
	// Handle error
} else {
	// Directory created successfully
}

**Explanation:**

* The `mkdirp()` function uses the `os.MkdirAll()` function to create a directory and any missing parent directories.
* The `0755` permission is used to set the permissions of the newly created directory.
* The `err` variable is used to handle any errors that may occur during directory creation.
* The function returns an error if the directory already exists.

**Cross-platform compatibility:**

The `mkdirp()` function is implemented using the native `os.MkdirAll()` function, which is available on all major operating systems. Therefore, the function is cross-platform compatible.
