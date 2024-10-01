The following code converts the C++ code to Golang:

```go
package main

import (
	"fmt"
	"os"
	"path/filepath"
)

func fileExists(path string) {
    _, err := os.Stat(path)

    if err == nil {
        info, _ := os.Stat(path)
        if info.IsDir() {
            fmt.Printf("%s is a directory\n", path)
        } else {
            fmt.Printf("%s exists with a file size of %d bytes.\n", path, info.Size())
        }
    } else if os.IsNotExist(err) {
        fmt.Printf("%s does not exist\n", path)
    }
}

func main() {
	fileExists("input.txt")
	fileExists("zero_length.txt")
	fileExists("docs/input.txt")
	fileExists("docs/zero_length.txt")

	fileExists(filepath.Join("/", "input.txt"))
	fileExists(filepath.Join("/", "zero_length.txt"))
	fileExists(filepath.Join("/", "docs", "input.txt"))
	fileExists(filepath.Join("/", "docs", "zero_length.txt"))
}
```
