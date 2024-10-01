Here is the equivalent code in Go:

```go
package main

import (
	"os"
	"fmt"
	"syscall"
)

func main() {
	// Get file size for files in the current directory.
	fileStatCurrentDir, err := os.Stat("input.txt")
	if err != nil {
		fmt.Println(err)
		return
	}
	fmt.Printf("%d\n", fileStatCurrentDir.Size()))

	// Get file size for files in the root directory.
	fileStatRootDir, err := os.Lstat("/input.txt")
	if err != nil {
		fmt.Println(err)
		return
	}
	fmt.Printf("%d\n", fileStatRootDir.Size()))

	// Go equivalent of hard coded "/home/user/myfiles/"
	dirPath := "/input.txt"
	file, err := os.OpenFile(dirPath, os.O_RDONLY, 0644)
	if err != nil {
		fmt.Println(err)
		return
	}
	defer file.Close()

	fileInfo, err := file.Stat()
	if err != nil {
		fmt.Println(err)
		return
	}
	
	// Print size of the file in bytes 
	fmt.Printf("%d\n", fileInfo.Size()))

}
```

This Go code does the same thing as the C code provided, which is to print the size of a "input.txt" file found in the current working directory and also in the root directory. The Go code accomplishes this by using the `os` package for I/O operations and the `syscall` package for interacting with low-level operating system primitives.
