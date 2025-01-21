To convert this Rust code to Golang, you can use the `os` package for directory creation and handling errors. Here's how it would look:

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
		if err := os.Mkdir(parent, 0755); err != nil && !os.IsExist(err) {
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

In this implementation, the `createDirAll` function tries to create each parent directory in the path before creating the last element. It uses a helper function `splitPath` to split the path into its parent directories and the last element.

The `os.Mkdir` function is used to create directories, with a mode of `0755` which allows read, write, and execute permissions for the owner, group, and others.

Please note that this code assumes that the directory path specified does not start or end with a slash, as Golang uses slashes for paths. Also, this is just a simple implementation, it may not handle edge cases such as paths with spaces or special characters.
