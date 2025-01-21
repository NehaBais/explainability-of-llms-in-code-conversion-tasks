 Sure, here is the equivalent code in Golang:

```go
package main

import (
	"fmt"
	"os"
)

func printFileSize(filename string) {
	info, err := os.Stat(filename)
	if err != nil {
		fmt.Println("Error:", err)
		return
	}
	size := info.Size()
	fmt.Printf("Size of file %s is %d bytes.\n", filename, size)
}

func main() {
	printFileSize("input.txt")
	printFileSize("/input.txt")
}
```

In this Go code:
- We use `os.Stat` to get the file information and check its size.
- The function `printFileSize` takes a filename as an argument and prints the size of the file.
- In `main`, we call `printFileSize` twice, once with "input.txt" and once with "/input.txt". Note that on Unix-like systems, `/input.txt` is equivalent to `input.txt` because it refers to a file in the current working directory.
