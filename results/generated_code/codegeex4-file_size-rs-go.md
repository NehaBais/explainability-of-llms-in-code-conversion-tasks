```go
package main

import (
	"fmt"
	"io/ioutil"
	"os"
)

func exitErr(err error, code int) {
	fmt.Fprintf(os.Stderr, "Error: %v\n", err)
	os.Exit(code)
}

func main() {
	if len(os.Args) < 2 {
		exitErr(fmt.Errorf("No file name supplied"), 1)
	}
	fileName := os.Args[1]
	metadata, err := os.Stat(fileName)
	if err != nil {
		exitErr(err, 2)
	}
	fmt.Printf("Size of %s is %d bytes\n", fileName, metadata.Size())
}
```
