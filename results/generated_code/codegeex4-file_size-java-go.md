Below is the equivalent code in Golang:

```go
package main

import (
	"fmt"
	"os"
)

func main() {
	fileA, err := os.Stat("file.txt")
	if err != nil {
		fmt.Println(err)
		return
	}
	fmt.Printf("%d B\n", fileA.Size())

	rootFile, err := os.Stat("/file.txt")
	if err != nil {
		fmt.Println(err)
		return
	}
	fmt.Printf("%d B\n", rootFile.Size())
}
```

In this code:
- `os.Stat` is used to get information about a file (similar to Java's `File.length()` method).
- The `Size()` function returns the size of the file in bytes.
- Error handling is included using `fmt.Println(err)` and returning if an error occurs.
