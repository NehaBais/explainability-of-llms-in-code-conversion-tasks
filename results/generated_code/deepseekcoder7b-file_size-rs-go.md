In GoLang, you can use the `os` and `syscall` packages for file operations like in Rust. However, Go doesn't provide a direct way to get file size or metadata, so we have to make system call using `Stat()` function from `syscall` package which is equivalent of `fs::metadata()` in the given rust code:

```go
package main

import (
	"fmt"
	"os"
	"path/filepath"
)

func main() {
	filename1 := "input.txt" // file in current directory
	size, err := getFileSize(filename1)
	if err != nil {
		fmt.Printf("Error getting size of %s: %v\n", filename1, err)
	} else {
		fmt.Printf("Size of %s is %d bytes\n", filename1, size)
	}

	// file in filesystem root directory - you need to provide full path here
	filename2 := "/path/to/input.txt" 
	size, err = getFileSize(filename2)
	if err != nil {
		fmt.Printf("Error getting size of %s: %v\n", filename2, err)
	} else {
		fmt.Printf("Size of %s is %d bytes\n", filename2, size)
	}
}

func getFileSize(filename string) (int64, error) {
	var size int64 = -1
	fs, err := os.Stat(filename)
	if err != nil {
		return size, err
	} else {
		size = fs.Size()
	}

	return size, nil
}
``` 

In this code, `getFileSize` function tries to get file information using the `os.Stat(filename)` which works much like in Rust’s `fs::metadata()` function. If it is able to retrieve data about a file, then the size of that file can be accessed through the Size() method on FileInfo struct returned by os.Stat(). Otherwise error will be returned.

