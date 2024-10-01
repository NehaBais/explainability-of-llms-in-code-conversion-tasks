In Golang, you can use the `os` package's functions to achieve this. Here is how the equivalent code would look like:

```go
package main

import (
	"fmt"
	"os"
)

func getFileSize(fileName string) (int64, error) {
	info, err := os.Stat(fileName)
	if err != nil {
		return 0, err
	}
	return info.Size(), nil
}

func main() {
	size, err := getFileSize("input.txt")
	if err != nil {
		fmt.Println("Error:", err)
	} else {
		fmt.Printf("The size of the 'input.txt' file is %d bytes\n", size)
	}

	size, err = getFileSize("/input.txt")
	if err != nil {
		fmt.Println("Error:", err)
	} else {
		fmt.Printf("The size of the '/input.txt' file is %d bytes\n", size)
	}
}
```

This code defines a function `getFileSize` that takes a filename as an argument and returns its size in bytes along with any error encountered during the operation. The `main` function calls this function twice, once for `input.txt` in the current directory and again for `/input.txt`, which is the root of the file system. The sizes are then printed to the console.
