```go
import (
	"fmt"
	"os"
	"path/filepath"
)

func mkdirp(path string) error {
	if _, err := os.Stat(path); os.IsNotExist(err) {
		if err := os.MkdirAll(path, 0755); err != nil {
			return fmt.Errorf("failed to create directory: %w", err)
		}
	}
	return nil
}
```

**Usage:**

err := mkdirp("./path/to/dir")
if err != nil {
	// Handle error
}

**Explanation:**

* The `mkdirp()` function takes a single path string as input.
* It checks if the directory already exists using `os.Stat()`.
* If the directory does not exist, it uses `os.MkdirAll()` to create the directory with permissions set to 0755.
* In case of any errors, the function returns an error.

**Note:**

* The `mkdirp()` function is cross-platform and works equally well on Windows, macOS, and Linux.
* The permissions (0755) can be adjusted as needed.
* The function does not handle any errors related to file permissions or ownership.
