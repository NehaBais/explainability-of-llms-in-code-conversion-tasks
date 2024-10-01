The equivalent Go code would be:

```go
package main

import (
	"fmt"
	"os"
)

func printFileSize(filename string) {
	info, err := os.Stat(filename)
	if err != nil {
		fmt.Println(err)
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

In Go, the `os.Stat` function can be used to get information about a file and its size is retrieved by getting the value of the `Size` field in the returned `FileInfo` structure. If an error occurs during the operation (`err != nil`), it's printed to standard error (`fmt.Println(err)`).
