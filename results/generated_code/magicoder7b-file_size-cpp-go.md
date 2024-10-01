 In Go, you can use the `os` and `io/ioutil` packages to achieve this task. Here's the equivalent Go code:

```go
package main

import (
	"fmt"
	"io/ioutil"
	"os"
	"path/filepath"
)

func printFileSize(filename string) {
	size, err := fileSize(filename)
	if err != nil {
		fmt.Println(err)
	} else {
		fmt.Printf("Size of file %s is %d bytes.\n", filename, size)
	}
}

func fileSize(filePath string) (int64, error) {
	info, err := os.Stat(filePath)
	if err != nil {
		return 0, fmt.Errorf("unable to get the file size: %s", err.Error())
	}
	return info.Size(), nil
}

func main() {
	printFileSize(filepath.Join(".", "input.txt"))
	printFileSize("/input.txt")
}
```

In this Go code, `fileSize` function is used to get the size of a file. If an error occurs during execution of the function, it will return that error, otherwise, it will return the size in bytes of the file. The `printFileSize` function uses `fileSize` to print out the size of the file. In the main function, we use `filepath.Join(".", "input.txt")` to get the relative path to "input.txt" from the current working directory and "/input.txt" for an absolute path.
