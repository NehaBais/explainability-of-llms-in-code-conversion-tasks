
Here's the equivalent code in Go:
```
package main

import (
	"log"
	"os"
)

func main() {
	// Get file size of input.txt in current working directory
	currentFile, err := os.Open("input.txt")
	if err != nil {
		log.Fatal(err)
	}
	defer currentFile.Close()

	size, err := currentFile.Stat()
	if err != nil {
		log.Fatal(err)
	}

	fmt.Println("Size of input.txt in current working directory:", size.Size())

	// Get file size of c:/input.txt in file system root
	rootFile, err := os.Open("c:/input.txt")
	if err != nil {
		log.Fatal(err)
	}
	defer rootFile.Close()

	size, err = rootFile.Stat()
	if err != nil {
		log.Fatal(err)
	}

	fmt.Println("Size of c:/input.txt in file system root:", size.Size())
}
```
Note that the `os` package is used to interact with the file system, and the `Stat()` method is used to get information about a file such as its size. The `defer` keyword is used to ensure that the files are closed when they are no longer needed.
