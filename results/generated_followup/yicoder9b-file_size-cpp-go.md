The error is due to unused import "io" and undefined import "strconv". In Go, all imported packages must be used, otherwise they will cause an "import not used" error. And strconv package is required for converting integer to string.

Here's the corrected code:
```go
package main

import (
	"fmt"
	"os"
	"strconv"
)

func printFileSize(fileName string) {
	file, err := os.Open(fileName)
	if err != nil {
		panic(err)
	}
	defer file.Close()

	info, _ := file.Stat()
	fmt.Println("Size of file " + fileName + " is " +
		strconv.Itoa(int(info.Size())) + " bytes.")
}

func main() {
	printFileSize("input.txt")
	printFileSize("/input.txt")
}
```
