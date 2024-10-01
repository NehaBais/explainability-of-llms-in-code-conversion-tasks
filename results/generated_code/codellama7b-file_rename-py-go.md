To convert this code from Python to Go, you can use the following approach:

1. Use the `os` package in Go to interact with the file system.
2. Use the `os.Rename()` function to rename files and directories.
3. Use the `os.Sep()` function to get the path separator for the current operating system.

Here's an example of how you could implement this code in Go:
```
package main

import (
	"fmt"
	"log"
	"os"
)

func main() {
	// Rename file "input.txt" to "output.txt" in the current working directory
	err := os.Rename("input.txt", "output.txt")
	if err != nil {
		log.Fatal(err)
	}
	fmt.Println("Renamed input.txt to output.txt")

	// Rename directory "docs" to "mydocs" in the current working directory
	err = os.Rename("docs", "mydocs")
	if err != nil {
		log.Fatal(err)
	}
	fmt.Println("Renamed docs to mydocs")

	// Rename file "input.txt" to "output.txt" in the root directory of the file system
	err = os.Rename(os.Sep + "input.txt", os.Sep + "output.txt")
	if err != nil {
		log.Fatal(err)
	}
	fmt.Println("Renamed input.txt to output.txt in the root directory")

	// Rename directory "docs" to "mydocs" in the root directory of the file system
	err = os.Rename(os.Sep + "docs", os.Sep + "mydocs")
	if err != nil {
		log.Fatal(err)
	}
	fmt.Println("Renamed docs to mydocs in the root directory")
}
```
Note that in Go, you need to use the `os.Sep()` function to get the path separator for the current operating system, as it is not a constant value like it is in Python.
