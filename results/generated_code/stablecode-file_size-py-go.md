Here is the equivalent Golang code:

```go
package main

import (
	"fmt"
	"io/ioutil"
	"os"
)

func main() {
	// Get size of file in same directory
	dirPath := "./input.txt"
	info, err := os.Stat(dirPath)
	if err != nil {
		fmt.Println("Error:", err)
		return
	}

	size1 := info.Size()

	// Get size of file in root directory
	rootDir := "/"
	filePath := rootDir + "input.txt"

	info, err = os.Stat(filePath)
	if err != nil {
		fmt.Println("Error:", err)
		return
	}

	size2 := info.Size()

	// Print the sizes
	fmt.Printf("The size of input.txt in the current directory is %d bytes.\n", int(size1)))
	fmt.Printf("The size of input.txt in the root directory is %d bytes.\n", int(size2))))
}
```
Please note that Go doesn't have a function like `os.path.getsize()`. Instead, we use functions from packages such as "os" or "io/ioutil". 

In this case, we are using the "os" package to get file information and calculate the size of the file. 

We first define the path for the file in the same directory, then use the `os.Stat()` function to get file information. If there is an error, we print the error message and return from the function. Otherwise, we calculate the size of the file using the `info.Size()` method and print the result.

This Golang code should provide the same functionality as the Python code provided in the original question.
