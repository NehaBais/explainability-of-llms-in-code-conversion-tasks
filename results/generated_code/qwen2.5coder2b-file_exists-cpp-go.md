In Go, the `os` package provides a way to interact with files and directories. Here is how you could convert your C++ code into Golang:

```go
package main

import (
	"fmt"
	"os"
)

func fileExists(path string) bool {
	if _, err := os.Stat(path); os.IsNotExist(err) {
		return false
	}
	return true
}

func main() {
	var paths = []string{
		"input.txt",
		"zero_length.txt",
		"docs/input.txt",
		"docs/zero_length.txt",
	}

	for _, path := range paths {
		if fileExists(path) {
			fmt.Println(path, "exists")
			if dir, err := os.Stat(path); err == nil && dir.IsDir() {
				fmt.Println(" is a directory")
			} else if !dir.IsDir() {
				fmt.Printf(" exists with a file size of %d bytes.\n", dir.Size())
			}
		} else {
			fmt.Println(path, "does not exist")
		}
	}
}
```

In the Go version, we define a `fileExists` function that returns true if a given path exists. In `main`, we create a slice of strings with the paths you provided and iterate over it, printing out whether each path exists and its size (if it's a directory).
