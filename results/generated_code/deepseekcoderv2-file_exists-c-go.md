### Solution

Here's the Golang code that solves this exercise:

```go
package main

import (
	"fmt"
	"io/ioutil"
)

func check_reg(path string) bool {
	fileInfo, err := os.Stat(path)
	if err != nil {
		return false
	}
	return !fileInfo.IsDir()
}

func check_dir(path string) bool {
	fileInfo, err := os.Stat(path)
	if err != nil {
		return false
	}
	return fileInfo.IsDir()
}

func main() {
	fmt.Printf("input.txt is a regular file? %s
", check_reg("input.txt"))
	fmt.Printf("docs is a directory? %s
", check_dir("docs"))
	fmt.Printf("/input.txt is a regular file? %s
", check_reg("/input.txt"))
	fmt.Printf("/docs is a directory? %s
", check_dir("/docs"))
}
```
