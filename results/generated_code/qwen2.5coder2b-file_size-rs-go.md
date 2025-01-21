To convert the Rust code to Golang, you can use Go's os and path packages for file operations. The `os.Stat` function is similar to `fs::metadata`, and it returns a `FileInfo` object which contains the size of the file.

Here is the equivalent Golang code:

```go
package main

import (
	"fmt"
	"io/ioutil"
	"log"
	"os"
)

func main() {
	fileName := os.Args[1]
	if len(fileName) == 0 {
		log.Fatal("No file name supplied")
	}

 fileInfo, err := ioutil.Stat(fileName)
	if err != nil {
		log.Fatalf("Error: %v", err)
	}

	fmt.Printf("Size of %s is %d bytes\n", fileName, fileInfo.Size())
}
```

The `os.Args` function provides access to the command-line arguments passed to the program. We use `len` to check if any file name is provided.

The `ioutil.Stat` function retrieves metadata about a file and returns an error if it fails to do so. If no error occurs, we print out the size of the file using `fileInfo.Size()`.
