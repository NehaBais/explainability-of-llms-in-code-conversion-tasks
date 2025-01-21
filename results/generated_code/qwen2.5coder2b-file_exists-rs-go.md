To convert the Rust code to Golang, you can use the `path/filepath` package for directory and file checking. Here's how the equivalent Golang code would look:

```go
package main

import (
	"fmt"
	"os"
)

func main() {
	var files = []string{
		"input.txt",
		"docs",
		"/input.txt",
		"/docs",
	}

	for _, file := range files {
		info, err := os.Stat(file)
		if err != nil {
			fmt.Println(err)
		} else if info.IsDir() {
			fmt.Printf("%s is a directory\n", file)
		} else {
			fmt.Printf("%s is a file\n", file)
		}
	}
}
```

This Golang program does the same thing as your Rust code. It checks each file in the `files` slice and prints whether it's a directory or a regular file, using the `os.Stat` function to retrieve file information.
