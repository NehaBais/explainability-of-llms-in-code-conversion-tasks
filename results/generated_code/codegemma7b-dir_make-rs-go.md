```go
import (
	"os"
)

func MkdirAll(path string) error {
	if _, err := os.Stat(path); os.IsNotExist(err) {
		return os.MkdirAll(path, os.ModePerm)
	}
	return nil
}
```

**Explanation:**

* The function `MkdirAll` takes a single path string as input.
* It checks if the directory already exists using `os.Stat`.
* If the directory doesn't exist, it calls `os.MkdirAll` with the path and `os.ModePerm` to create the directory and any missing parents.
* If the directory already exists, the function returns `nil` to indicate success.

**Usage:**

err := MkdirAll("./path/to/dir")
if err != nil {
	// Handle error
}
