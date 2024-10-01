```go
package main

import (
	"fmt"
	"os"
)

func fileExists(path string) {
	fi, err := os.Stat(path)
	if err != nil {
		return false
	}

	if fi.IsDir() {
		fmt.Println("is a directory")
	} else {
		fmt.Printf("exists with a file size of %d bytes.", fi.Size())
	}
	return true
}

func main() {
	fileExists("input.txt")
	fileExists("zero_length.txt")
	fileExists("/docs/input.txt")
	fileExists("/docs/zero_length.txt")
}
```
Note that the `os` package in Go provides a function called `Stat` which returns an instance of the `FileInfo` interface, which has information about the file such as size and type. The `IsDir` method on this interface can be used to check if a path points to a directory or not.

Also note that the `os.PathSeparator` variable is used to separate paths in Go. This is different from C++ where you use `/` for separating paths.
