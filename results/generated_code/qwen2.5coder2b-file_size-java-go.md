To convert the Java code to Golang, you can use the `io/ioutil` package for reading files and calculate their sizes. Here is how you would do it:

```go
package main

import (
	"fmt"
	"io/ioutil"
)

func main() {
	// Define file names
	fileA := "file.txt"
	fileB := "/file.txt"

	// Get size of the file in current working directory
	file, err := ioutil.ReadFile(fileA)
	if err != nil {
		fmt.Println("Error reading file:", err)
		return
	}
	fmt.Printf("%d bytes\n", len(file))

	// Get size of the file in root directory
	file, err = ioutil.ReadFile(fileB)
	if err != nil {
		fmt.Println("Error reading file:", err)
		return
	}
	fmt.Printf("%d bytes\n", len(file))
}
```

This Golang code does exactly the same task as the original Java code. It reads the size of two files (`input.txt` and `/file.txt`) in the current working directory and the root directory, respectively, and prints their sizes in bytes. Note that the file paths might need to be adjusted based on your operating system.
