 The equivalent Go code would be:

```go
package main

import (
	"fmt"
	"os"
	"path/filepath"
)

func main() {
	// Check if file 'input.txt' exists in the current directory and print result.
	_, err := os.Stat("input.txt")
	if os.IsNotExist(err) {
		fmt.Println("File input.txt does not exist.")
	} else {
		fmt.Println("File input.txt exists.")
	}

	// Check if directory 'docs' exists in the current directory and print result.
	_, err = os.Stat("docs")
	if os.IsNotExist(err) {
		fmt.Println("Directory docs does not exist.")
	} else {
		fmt.Println("Directory docs exists.")
	}

	// Check if file 'c:/input.txt' exists and print result.
	_, err = os.Stat(filepath.Join(os.Getenv("SystemRoot"), "input.txt"))
	if os.IsNotExist(err) {
		fmt.Println("File c:/input.txt does not exist.")
	} else {
		fmt.Println("File c:/input.txt exists.")
	}

	// Check if directory 'c:/docs' exists and print result.
	_, err = os.Stat(filepath.Join(os.Getenv("SystemRoot"), "docs"))
	if os.IsNotExist(err) {
		fmt.Println("Directory c:/docs does not exist.")
	} else {
		fmt.Println("Directory c:/docs exists.")
	}
}
```
This code checks the existence of "input.txt" and "docs" files/directories both in the current directory and a file and a directory in the root of the filesystem.
