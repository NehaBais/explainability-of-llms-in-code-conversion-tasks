 To convert the given Java code to Golang, we need to check if both files (`input.txt`) exist in different directories. We will do this for two scenarios: the current working directory and the filesystem root. Here's how you can achieve this in Go:

1. Check if a file named `input.txt` exists in the current working directory.
2. Check if a file named `input.txt` exists in the filesystem root (`/docs`).

Here is the equivalent Golang code:

```go
package main

import (
	"fmt"
	"os"
)

func checkFileExists(filename string) bool {
	_, err := os.Stat(filename)
	return !os.IsNotExist(err)
}

func main() {
	// Check in the current working directory
	currentDirFile := "input.txt"
	fmt.Printf("Checking if %s exists in the current directory: %v\n", currentDirFile, checkFileExists(currentDirFile))

	// Check in the filesystem root (assuming /docs)
	rootDirFile := "/docs/input.txt"
	fmt.Printf("Checking if %s exists in the filesystem root: %v\n", rootDirFile, checkFileExists(rootDirFile))
}
```

### Explanation:
1. **`checkFileExists` Function**: This function takes a filename as input and checks if it exists using `os.Stat`. It returns `true` if the file exists and `false` otherwise. The `os.IsNotExist` function is used to check if the error indicates that the file does not exist.
2. **Main Function**: 
   - We first check for the existence of `input.txt` in the current working directory by calling `checkFileExists("input.txt")`.
   - Then, we check for the existence of `/docs/input.txt` by calling `checkFileExists("/docs/input.txt")`.

This code will print whether each file exists in its respective location.
