The JavaScript code uses the ActiveXObject to interact with the filesystem of a Windows machine. This is not directly possible in Golang, as Go does not have built-in file system object like JavaScript.

However, we can achieve similar results using standard library functions of Go language.
```go
package main

import (
	"fmt"
	"os"
)

func main() {
	file1, err := os.Stat("input.txt")
	if err != nil {
		fmt.Println(err)
		return
	}
	fmt.Println(file1.Size())

	rootFile, err := os.Stat("/input.txt")
	if err != nil {
		fmt.Println(err)
		return
	}
	fmt.Println(rootFile.Size())
}
```
This code first checks for the size of a file in the current working directory and then in the root directory (if available on your system). If it can't find the file or encounter an error, it will print the error. It's important to remember that os.Stat() returns the FileInfo object from which we get the size using .Size().
