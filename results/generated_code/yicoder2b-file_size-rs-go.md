The provided Rust code is for verifying the size of a file, but does not perform any action with that size information. Here's a simple version of how you can do this in Golang:

```go
package main

import (
	"fmt"
	"os"
	"path/filepath"
)

func main() {
	file, err := os.Open("input.txt")
	if err != nil {
		if err == nil && err.Type() == os.ErrNotExist {
			fmt.Printf("File 'input.txt' does not exist\n")
		} else if err != nil {
			fmt.Printf("Cannot open file: %v\n", err)
			os.Exit(1)
		}
	}

	info, _ := file.Fstat() // retrieves information about the file such as its size
    size := info.Size / 1024 // converting size to kb

	fmt.Printf("File 'input.txt' is %d bytes\n", size)
}
```

This code will print the size of the file "input.txt" in the current working directory, or exit with an error if this file does not exist. Note that you need to compile this program before running it. To do so, you can use `go build` command in your terminal.
