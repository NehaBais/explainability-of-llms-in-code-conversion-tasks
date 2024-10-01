In Go, you can use the `os` and `io` libraries to achieve this:

```go
package main

import (
	"fmt"
	"io/ioutil"
	"os"
	"path"
)

func getFileSize(filename string) (int64, error) {
	fileInfo, err := os.Stat(filename)
	if err != nil {
		return 0, err
	}
	return fileInfo.Size(), nil
}

func main() {
	// Get the size of input.txt in current working directory
	size, err := getFileSize("input.txt")
	if err != nil {
		fmt.Printf("Failed to get file size: %s\n", err)
	} else {
		fmt.Println(size)
	}

	// Get the size of input.txt in root directory
	absPath := path.Join("/", "input.txt")
	size, err = getFileSize(absPath)
	if err != nil {
		fmt.Printf("Failed to get file size: %s\n", err)
	} else {
		fmt.Println(size)
	}
}
```
This Go code does the same thing as your C code - it gets and prints the size of "input.txt" in the current directory and root directory. If there is an error getting the file size, it will print that error instead.
