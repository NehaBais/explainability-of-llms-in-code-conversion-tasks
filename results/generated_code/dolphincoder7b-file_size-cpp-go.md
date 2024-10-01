```go
package main

import (
	"fmt"
	"os"
)

func printFileSize(filename string) {
	fi, err := os.Stat(filename)
	if err != nil {
		fmt.Fprintf(os.Stderr, "%v\n", err)
		return
	}

	fmt.Printf("Size of file %s is %d bytes.\n", filename, fi.Size())
}

func main() {
	printFileSize("input.txt")
	printFileSize("/input.txt")
}
```
In Golang, the `os` package provides functions to interact with the operating system and work with files. The `Stat` function is used to get information about a file by providing its name or path. It returns a `FileInfo`, which contains details like the size of the file in bytes. The result can be further processed using `fi.Size()`. Finally, we print the size and file name to the standard output stream.
