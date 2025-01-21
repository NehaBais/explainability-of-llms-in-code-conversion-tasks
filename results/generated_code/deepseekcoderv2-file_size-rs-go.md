 Sure, here is the equivalent Go code for the provided Rust script:

```go
package main

import (
	"fmt"
	"io"
	"os"
)

func main() {
	if len(os.Args) < 2 {
		fmt.Fprintln(os.Stderr, "Error: No file name supplied")
		os.Exit(1)
	}

	file := os.Args[1]
	info, err := os.Stat(file)
	if err != nil {
		fatal("Could not get file info", err)
	}

	fmt.Printf("Size of %s is %d bytes\n", file, info.Size())
}

func fatal(msg string, err error) {
	fmt.Fprintf(os.Stderr, "Error: %s: %v\n", msg, err)
	os.Exit(2)
}
```

### Explanation:
1. **Command Line Argument Handling**: In Go, `os.Args` is used to get command line arguments. The script checks if the required argument (file name) is provided and exits with an error message if it's not.
2. **File Metadata Retrieval**: The `os.Stat` function in Go is used to retrieve file metadata, similar to Rust's `fs::metadata`. If there's an error retrieving the metadata, a fatal error is printed and the program exits.
3. **Error Handling**: Both Rust and Go have mechanisms for handling errors. In Go, we use custom `fatal` function to handle errors and print them with a message before exiting the program.
4. **Output**: The size of the file is printed in bytes using `fmt.Printf`.

This Go code should provide equivalent functionality to your Rust script.
