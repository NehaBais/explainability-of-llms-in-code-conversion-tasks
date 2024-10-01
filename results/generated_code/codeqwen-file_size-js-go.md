The equivalent Go code for the given JavaScript code is as follows:

First, you need to import the `ioutil` package and the `os` package for working with files in Golang. Here's how to do it:

```go
package main

import (
	"fmt"
	"io/ioutil"
	"os"
)

func main() {
	// Check file size of 'input.txt' in the current directory
	info, err := os.Stat("input.txt")
	if err != nil {
		fmt.Println(err)
		return
	}
	fmt.Printf("Size of input.txt: %d bytes\n", info.Size())

	// Check file size of 'c:/input.txt' in the root directory
	info, err = os.Stat("C:/input.txt")
	if err != nil {
		fmt.Println(err)
		return
	}
	fmt.Printf("Size of c:/input.txt: %d bytes\n", info.Size())
}
```

This code uses `os.Stat()` to get the file info and then prints out its size in bytes. The error handling is done by checking if an error occurred during the function call, and if so, printing out the error message and returning from the function without continuing execution.
