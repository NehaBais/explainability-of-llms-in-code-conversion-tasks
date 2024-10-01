```go
package main

import (
	"fmt"
	"io/ioutil"
	"os"
)

func printFileSize(filename string) {
	file, err := os.Open(filename)
	if err != nil {
		fmt.Println(err)
		return
	}
	defer file.Close()

	fi, err := file.Stat()
	if err != nil {
		fmt.Println(err)
		return
	}

	size := fi.Size()
	fmt.Printf("Size of file %s is %d bytes\n", filename, size)
}

func main() {
	printFileSize("input.txt")
	printFileSize("/input.txt")
}
```
Note: The Go code above will only work if the `input.txt` file exists in the current working directory and in the root path. The `os.Open` function returns an error when it cannot find the file or directory. This is similar to the exception handling mechanism used in the original C++ code, but the error messages are printed to standard output (as there is no direct equivalent of the `cerr` stream in Go).
