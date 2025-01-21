 Sure! Below is the equivalent Go code to achieve the same functionality as the provided JavaScript code using the `os` package in Go:

```go
package main

import (
	"fmt"
	"os"
)

func main() {
	// Check size of input.txt in the current working directory
	fileInfo, err := os.Stat("input.txt")
	if err != nil {
		fmt.Println("Error:", err)
		return
	}
	fmt.Printf("Size of input.txt in current directory: %d bytes\n", fileInfo.Size())

	// Check size of c:/input.txt (assuming the path is correct for your system)
	fileInfoRoot, err := os.Stat("c:/input.txt")
	if err != nil {
		fmt.Println("Error:", err)
		return
	}
	fmt.Printf("Size of c:/input.txt: %d bytes\n", fileInfoRoot.Size())
}
```

This Go code uses the `os` package to get information about the file, specifically its size. It first tries to get the size of `input.txt` from the current working directory and then attempts to get the size of `c:/input.txt`. If either operation fails due to an error, it prints the error message.
