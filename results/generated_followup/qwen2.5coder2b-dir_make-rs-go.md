The error is caused by trying to use a rune (which is a primitive type for characters) as a string, which is not allowed.

To fix this, we can convert the rune to a string using `string(parent)`.

Here's the corrected code:

```go
package main

import (
	"os"
)

func createDirAll(path string) error {
	if _, err := os.Stat(path); !os.IsNotExist(err) {
		return nil
	}

	parents, lastElement := splitPath(path)
	for _, parent := range parents {
		if err := os.Mkdir(string(parent), 0755); err != nil && !os.IsExist(err) {
			return err
		}
	}

	return os.Mkdir(lastElement, 0755)
}

func splitPath(path string) (parentDir string, lastElement string) {
	lastSlashIndex := strings.LastIndexOf(path, "/")
	if lastSlashIndex == -1 {
		return "", path
	} else {
		parentDir = path[:lastSlashIndex]
		lastElement = path[lastSlashIndex+1:]
	}
	return
}

func main() {
	err := createDirAll("./path/to/dir")
	if err != nil {
		panic(err)
	}
}
```

The corrected code now correctly converts the rune to a string before passing it to `os.Mkdir`.
