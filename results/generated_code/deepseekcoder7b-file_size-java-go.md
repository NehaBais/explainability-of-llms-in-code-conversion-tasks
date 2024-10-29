In Golang, you can use the `os` package to check the size of a file in the same way as follows: 

```go
package main

import (
	"fmt"
	"os"
)

func main() {
	fileInfoA, err := os.Stat("input.txt")
	if err != nil {
		fmt.Println(err)
	} else {
		fmt.Printf("%d B\n", fileInfoA.Size())
	}

	fileInfoB, err := os.Stat("/input.txt")
	if err != nil {
		fmt.Println(err)
	} else {
		fmt.Printf("%d B\n", fileInfoB.Size())
	}
}
```

This code uses the `os.Stat` function to retrieve information about a given file, which includes its size in bytes. It handles any errors that might occur when trying to access the files and prints them if they do happen. If the file exists, it retrieves its size with `fileInfoA.Size()` or `fileInfoB.Size()`. The error handling is necessary because if a file doesn't exist at the specified path, `os.Stat` will return an error.

