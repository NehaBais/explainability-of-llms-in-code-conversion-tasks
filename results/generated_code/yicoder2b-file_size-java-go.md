The equivalent code in Golang would be:

```golang
package main

import (
	"fmt"
	"os"
	"path/filepath"
)

func main() {
	// fileA in the current working directory "."
	name := "input.txt"
	fileA, err := os.Open(name)
	if err != nil {
		fmt.Printf("Unable to open %s: %v\n", name, err)
	} else {
		defer fileA.Close()
		info, _ := fileA.Stat()
		// Print file size in bytes
		fmt.Printf("%d B \n", info.Size())
	}

	// fileB in file system root "/"
	fileB, err := os.Open("/input.txt")
	if err != nil {
		fmt.Printf("Unable to open /input.txt: %v\n", err)
	} else {
		defer fileB.Close()
		info, _ := fileB.Stat()
		// Print file size in bytes
		fmt.Printf("%d B \n", info.Size())
	}
}
```
This Go code uses the `os` and `path/filepath` packages to accomplish the same task: it opens a file in the current working directory and the root of the file system, then reads its size in bytes using the `Stat()` method. The equivalent Java code does not read from hard drives, so it doesn't handle the situation when the file is not found or any other errors that may occur while reading.
