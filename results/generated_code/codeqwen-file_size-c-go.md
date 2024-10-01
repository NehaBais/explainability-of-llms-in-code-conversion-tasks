Here is the equivalent code in Golang:

```go
package main

import (
	"fmt"
	"os"
)

func checkSize(filePath string) {
	info, err := os.Stat(filePath)
	if err != nil {
		panic(err)
	}
	fmt.Printf("%d\n", info.Size())
}

func main() {
	checkSize("input.txt")
	checkSize("/input.txt")
}
```

This code is using the `os` package in Golang to check the size of a file. The `Stat()` function is used to return information about a file, including its size. The result is then printed out. Please note that in Golang, we use `/` for root directories, so you may need to adjust your paths according to your use-case.
