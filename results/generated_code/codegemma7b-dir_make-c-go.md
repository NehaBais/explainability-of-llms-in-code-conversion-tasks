```go
import (
	"os"
	"path/filepath"
)

// mkdirp creates a directory and its parents if they don't exist.
func mkdirp(path string) error {
	return os.MkdirAll(path, os.ModePerm)
}
```

**Usage:**

err := mkdirp("./path/to/dir")
if err != nil {
	// Handle error
}

**Explanation:**

* The `mkdirp` function takes a single path string as input.
* `os.MkdirAll` is used to create the directory and its parents.
* `os.ModePerm` is used to set the permissions of the directory to allow read, write, and execute permissions for all users.

**Cross-Platform Compatibility:**

* The `mkdirp` function is compatible across all major operating systems, including Windows, macOS, and Linux.
* `os.MkdirAll` handles directory creation in a cross-platform manner.

**Note:**

* The permissions of the directory can be modified as needed.
* The `mkdirp` function returns an error if the directory already exists.
