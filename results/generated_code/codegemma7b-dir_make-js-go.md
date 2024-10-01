```go
import (
	"os"
	"path/filepath"
)

// mkdirp creates a directory and its parent directories if they don't exist.
func mkdirp(path string) error {
	return os.MkdirAll(path, 0755)
}
```

**Explanation:**

* The `mkdirp` function takes a single argument, `path`, which is the path to the directory that needs to be created.
* It uses the `os.MkdirAll()` function to create the directory and its parent directories.
* The `os.MkdirAll()` function returns an error if the directory already exists, but this is considered a success in this case.
* The `0755` permission bits are used to set the permissions of the newly created directory.

**Example Usage:**

err := mkdirp("./path/to/dir")
if err != nil {
	// Handle error
}

**Note:**

* The `mkdirp` function is cross-platform and will work on both Windows and Linux systems.
* The `os.MkdirAll()` function does not create intermediate directories if they already exist, unlike the `mkdirp` function from the JavaScript code.
