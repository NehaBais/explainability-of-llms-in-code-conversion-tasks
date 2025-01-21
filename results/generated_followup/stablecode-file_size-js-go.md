Error: 
/tmp/stablecode-file_size-js-go.go:5:2: "path/filepath" imported and not used

Fix:
Simply remove the import statement for "path/filepath". Since we're only using the `filepath.WalkDir` function, which is already part of the standard library in Golang, there's no need to manually import it.

Corrected code:
```go
package main

import (
	"os"
)

func fileSize(filename string) int64 {
	fi, err := os.Stat(filename)
	if err != nil {
		return 0
	}
	return fi.Size()
}

func main() {
	// Current directory
	currentDirFileSize := fileSize("input.txt")
	println("Current Directory File Size: ", currentDirFileSize)

	// Root directory
	rootDirFileSize := fileSize("c:/input.txt")
	println("Root Directory File Size: ", rootDirFileSize)
}
```
