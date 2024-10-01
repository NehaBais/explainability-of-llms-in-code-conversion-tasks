In Go, you can use the `os` and `path/filepath` packages to achieve this. Here is an equivalent code in Golang:

```go
package main

import (
	"fmt"
	"os"
	"path/filepath"
)

func main() {
	file := "input.txt"
	cwdSize, errCWD := fileSize(filepath.Join(".", file))
	if errCWD != nil {
		fmt.Println(errCWD)
		return
	}

	rootSize, errRoot := fileSize(file)
	if errRoot != nil {
		fmt.Println(errRoot)
		return
	}

	fmt.Printf("Current Working Directory: %d bytes\n", cwdSize)
	fmt.Printf("File System Root: %d bytes\n", rootSize)
}

func fileSize(path string) (int64, error) {
	fileInfo, err := os.Stat(path)
	if err != nil {
		return 0, err
	}
	return fileInfo.Size(), nil
}
```

In this code:

- We define a function `fileSize` that gets the size of a file using `os.Stat`.
- In the `main` function, we join the current working directory path and "input.txt" to get the full path in the current working directory.
- We then call `fileSize` with these paths to get their sizes.
- We print the sizes of both files.
