 Here's the equivalent code in Golang:

```go
package main

import (
	"fmt"
	"os"
)

func main() {
	// Create file "output.txt" in current directory
	file, err := os.Create("output.txt")
	if err != nil {
		fmt.Println(err)
	} else {
		file.Close()
	}

	// Create file "output.txt" in root directory
	rootFile, err := os.Create("/output.txt")
	if err != nil {
		fmt.Println(err)
	} else {
		rootFile.Close()
	}

	// Create directory "docs" in current directory
	err = os.Mkdir("docs", 0755)
	if err != nil {
		fmt.Println(err)
	}

	// Create directory "docs" in root directory
	rootDir := "/docs"
	err = os.Mkdir(rootDir, 0755)
	if err != nil {
		fmt.Println(err)
	}
}
```

This Go code performs the same operations as the provided Java code: it creates an empty file named "output.txt" in both the current working directory and the filesystem root, and it also creates an empty directory named "docs" in both locations.
