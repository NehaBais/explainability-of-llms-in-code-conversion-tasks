The Go programming language does not have a built-in equivalent for the `std::filesystem` library in C++, but you can use `os` package in Golang to achieve similar functionality. Here is how it would look like:

```go
package main

import (
	"fmt"
	"io/ioutil"
	"log"
	"path/filepath"
)

func printFileSize(filename string) {
	absPath, err := filepath.Abs(filename)
	if err != nil {
		log.Fatal(err)
	}
	fileInfo, err := ioutil.ReadFile(absPath)
	if err != nil {
		fmt.Println(err)
		return
	}
	fmt.Printf("Size of file %s is %d bytes.\n", filename, len(fileInfo))
}

func main() {
	printFileSize("input.txt")
	printFileSize("/input.txt")
}
```
In this Go code:
1. The `absPath` method gets the absolute file path of a given relative file name in Golang. This is because when we pass "/input.txt", it's looking for that file from root directory, not the current working directory.
2. The `ioutil.ReadFile(absPath)` method reads the content of the file and returns byte slice which provides the size by using the built-in `len()` function. 
3. When an error occurs (like trying to open a non-existent file), it prints the error message, otherwise it will print out the length/size of the file in bytes.

