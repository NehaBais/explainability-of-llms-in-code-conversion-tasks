```go
package main

import (
	"fmt"
	"log"
	"os"
)

func main() {
	currentDirSize, err := getFileSize("input.txt")
	if err != nil {
		log.Fatal(err)
	}
	fmt.Printf("Size of input.txt in current directory: %d bytes\n", currentDirSize)

	rootDirSize, err := getFileSize("/input.txt")
	if err != nil {
		log.Fatal(err)
	}
	fmt.Printf("Size of /input.txt in root directory: %d bytes\n", rootDirSize)
}

func getFileSize(filename string) (int64, error) {
	fileInfo, err := os.Stat(filename)
	if err != nil {
		return 0, err
	}
	return fileInfo.Size(), nil
}
```
This Go code does essentially the same thing as your Python code. It first attempts to get the size of "input.txt" in the current directory by calling getFileSize("input.txt"). If this call returns an error (such as if the file does not exist), it logs that error and exits. Otherwise, it prints out the size of the file.

Next, it does the same thing for "/input.txt" in the root directory.

The function getFileSize takes a filename as input, gets the os.FileInfo for that file using os.Stat, and then returns the Size field from the FileInfo. If there is an error (such as if the file doesn't exist), it returns 0 and that error.
