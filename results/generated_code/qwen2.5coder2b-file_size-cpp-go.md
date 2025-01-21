In Go, the `os` package provides a way to interact with files and directories. Here is how you could convert your C++ code into Golang:

```go
package main

import (
	"fmt"
	"os"
)

func getFileSize(filename string) {
	if _, err := os.Stat(filename); err == nil {
		fmt.Printf("Size of file %s is %d bytes.
", filename, os.Size(filename))
	} else if os.IsNotExist(err) {
		fmt.Println(err)
	} else {
		fmt.Printf("Error occurred while getting size: %v
", err)
	}
}

func main() {
	getFileSize("input.txt")
	getFileSize("/input.txt")
}
```

Here's the explanation of the code:

- The `os.Stat` function is used to get file information. If no error occurs, it returns a `FileInfo` struct that contains the size of the file in bytes.
- In case an error occurs (for example, if the file does not exist), we print the error message using `fmt.Println`.
- We call `os.Size(filename)` to get the size of the file. This function also returns an error, but since we have already handled it by checking with `os.IsNotExist`, we don't need to explicitly handle it in this case.
