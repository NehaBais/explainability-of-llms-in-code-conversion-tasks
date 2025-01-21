 Sure, here is the equivalent code in Golang:

```go
package main

import (
	"fmt"
	"os"
)

func main() {
	fileA := "file.txt"
	infoA, err := os.Stat(fileA)
	if err != nil {
		fmt.Println("Error:", err)
		return
	}
	fmt.Printf("%,d B\n", infoA.Size())

	fileB := "/file.txt"
	infoB, err := os.Stat(fileB)
	if err != nil {
		fmt.Println("Error:", err)
		return
	}
	fmt.Printf("%,d B\n", infoB.Size())
}
```

This Go code does the following:
1. It attempts to get the size of `file.txt` in the current working directory.
2. It also attempts to get the size of `/file.txt` in the file system root.
3. If there is an error (e.g., the files do not exist), it prints the error message.
