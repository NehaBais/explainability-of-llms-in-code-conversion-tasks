Here is the equivalent Golang code to accomplish this task, using built-in packages for file handling and info retrieval. 

The Go programming language has a standard library that includes functions for reading files (`os.Open()`), getting information about them (`os.Stat()`) etc.

```go
package main

import (
	"fmt"
	"os"
)

func getFileSize(filePath string) (int64, error) {
	fileInfo, err := os.Stat(filePath)
	if err != nil {
		return 0, err
	}
	return fileInfo.Size(), nil
}

func main() {
	// Current working directory
	size1, err := getFileSize("input.txt")
	if err != nil {
		fmt.Println(err)
		return
	}
    fmt.Printf("Size of input.txt in current directory: %d bytes\n", size1)
    
	// File system root
	size2, err := getFileSize("/path/to/root/input.txt") // replace with the actual path to root
	if err != nil {
		fmt.Println(err)
		return
	}
    fmt.Printf("Size of input.txt in file system root: %d bytes\n", size2)
}
```
This code opens a file, retrieves its information (`os.Stat()`), and then gets the size from that data using `fileInfo.Size()` method. If there are any errors along the way they get printed to standard output. The files you're checking should be accessible by your Go program for it to work correctly.

