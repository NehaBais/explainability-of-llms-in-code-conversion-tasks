In Go, the equivalent code would look like this:
```go
package main

import (
	"fmt"
	"os"
	"path/filepath"
)

func fileExists(path string) {
	fmt.Println(path)
	info, err := os.Stat(path)
	if os.IsNotExist(err) {
		fmt.Printf("%s does not exist\n", path)
		return
	}

	if err != nil {
		panic(err)
	}

	if info.IsDir() {
		fmt.Println(path, "is a directory")
	} else {
		fmt.Printf("%s exists with a file size of %d bytes\n", path, info.Size())
	}
}

func main() {
	fileExists("input.txt")
	fileExists("zero_length.txt")
	fileExists("docs/input.txt")
	fileExists("docs/zero_length.txt")

	// For the root of the filesystem, we use filepath.Join to ensure correct path separators 
	fileExists(filepath.Join("/", "input.txt"))
	fileExists(filepath.Join("/", "docs"))
}
```
This code does essentially the same thing as your C++ code: it checks if files and directories exist, and if they're files or directories, prints out a corresponding message. Note that there's no direct equivalent to `std::filesystem::file_size` in Go, so we use `info.Size()` instead which gives the size of the file in bytes.
