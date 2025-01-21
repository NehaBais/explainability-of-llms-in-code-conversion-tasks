Here is the equivalent Go code for your Rust code:

```go
package main

import (
	"fmt"
	"os"
)

func checkFileSize(path string) {
	fileInfo, err := os.Stat(path)
	if err != nil {
		fmt.Fprintf(os.Stderr, "Error: %v\n", err)
		os.Exit(2)
	}

	fmt.Printf("Size of %s is %d bytes\n", path, fileInfo.Size())
}

func main() {
	if len(os.Args) < 2 {
		checkFileSize("./input.txt")
		checkFileSize("/")
		return
	}
	
	checkFileSize(os.Args[1])
}
```

This Go code does the same thing as your Rust code. It first checks whether a command-line argument is provided. If not, it checks the size of `input.txt` in the current directory and `/`. If a command-line argument is provided, it checks the size of that file instead.
