The provided Rust code checks if a file or directory exists. Below is its Go version:

```go
package main

import (
	"fmt"
	"os"
)

func main() {
	for _, path := range []string{"input.txt", "docs", "/input.txt", "/docs"} {
		switchFileType(path)
	}
}

func switchFileType(filePath string) {
	if info, err := os.Stat(filePath); err == nil && info.IsDir() {
		fmt.Printf("%s is a directory\n", filePath)
	} else if err == nil {
		fmt.Printf("%s is a file\n", filePath)
	} else {
		fmt.Printf("%s does not exist\n", filePath)
	}
}
```
This Go code does essentially the same thing as the original Rust code. It uses `os` package for filesystem operations and `os.Stat()` function to retrieve information about a given file or directory path. If the file exists and is a directory it prints "directory", if the file exists but isn't a directory it prints "file", otherwise it prints "does not exist". The directory paths are relative to the current working directory and the root of the filesystem. Note that Go does not support absolute paths for its operations, so you need to provide an existing path to `switchFileType()` function.
