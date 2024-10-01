In Go, you can use the `os` and `stat` packages for file operations. Here is how this Rust code can be written in Go:

```go
package main

import (
	"fmt"
	"io/ioutil"
	"os"
)

func main() {
	fileInfo, err := os.Stat("input.txt")
	if err != nil {
		panic(err)
	}
	fmt.Printf("Size of input.txt is %d bytes\n", fileInfo.Size())

	// For another one in the file system root:
    filePath := "/" // or whatever your root directory path is
	fileInfoRoot, err := os.Stat(filePath)
	if err != nil {
		panic(err)
	}
	fmt.Printf("Size of %s is %d bytes\n", filePath, fileInfoRoot.Size())
}
```

Remember to handle errors properly in Go since it doesn't have `unwrap()`-like error handling like Rust does. In this code, we use the `panic` function which will terminate the program if an error occurs.
