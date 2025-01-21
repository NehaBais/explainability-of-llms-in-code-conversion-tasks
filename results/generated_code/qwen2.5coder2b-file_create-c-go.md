To convert the given C code to Golang, you would need to utilize the `os` and `io/ioutil` packages. Here is how it could be done:

```go
package main

import (
	"fmt"
	"os"
	"io/ioutil"
)

func main() {
	// Creating "output.txt"
	if err := ioutil.WriteFile("output.txt", []byte{}, 0640); err != nil {
		fmt.Println("Error creating file:", err)
		return
	}

	// Creating "docs" directory
	err := os.MkdirAll("docs", 0750)
	if err != nil {
		fmt.Println("Error creating directory:", err)
		return
	}

	fmt.Println("Files and directories created successfully.")
}
```

This code does the following:
1. It uses `ioutil.WriteFile` to create a new file "output.txt" with the specified permissions. The third parameter of `WriteFile` is 0640.
2. It uses `os.MkdirAll` to create a new directory "docs" with the specified permissions. The second parameter is 0750.

Note: Make sure your Go environment has access rights to write files in the current working directory and to create directories.
