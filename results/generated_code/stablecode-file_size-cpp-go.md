Below is the conversion of your C++ code to Golang:

```go
package main

import (
	"fmt"
	"io/ioutil"
	"os"
)

func printFileSize(filename string) {
	fileInfo, err := os.Stat(filename)

	if err != nil {
		fmt.Println("Error occurred:", err)
		return
	}

	size := fileInfo.Size()

	fmt.Printf("Size of file %s is %d bytes.\n", filename, size))
}

func main() {
	printFileSize("input.txt")

	if _, err := os.Stat("/input.txt"); !os.IsNotExist(err) {
		fmt.Println("Error occurred:", err)
		return
	}

	fmt.Printf("Size of file /input.txt is %d bytes.\n", size))
}
```

This Golang code does the same as your C++ code, which verifies the size of a file called "input.txt" in the current working directory and another one in the file system root. The Golang code uses the `os` package to get information about files and directories, and then prints out the sizes of these files.
