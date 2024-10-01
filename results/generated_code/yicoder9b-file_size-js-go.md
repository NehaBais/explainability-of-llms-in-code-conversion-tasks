Here is the equivalent code in Golang:

```go
package main

import (
	"fmt"
	"os"
	"io/ioutil"
)

func getFileSize(path string) {
    fileInfo, err := os.Stat(path)
    if err != nil {
        panic(err) // or return err instead of panic
    } else {
        fmt.Println(fileInfo.Size())
    }
}

func main() {
	getFileSize("input.txt")
	// For file in root directory, it depends on the operating system
	if runtimeinfo.GOOS == "windows"{ 
		getFileSize("C:\\input.txt") // windows style path
    } else {
		getFileSize("/input.txt")   // unix-like style path
	}
}
```
