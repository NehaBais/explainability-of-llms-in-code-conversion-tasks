Here is the equivalent code in Golang:

```golang
package main

import (
	"fmt"
	"os"
)

func main() {
	fileA, err := os.Stat("input.txt")
    if err != nil {
        fmt.Println(err)
        return
    }
    fmt.Printf("%d B\n", fileA.Size())
	
	fileB, err := os.Stat("/input.txt")
    if err != nil {
        fmt.Println(err)
        return
    }
    fmt.Printf("%d B\n", fileB.Size())
}
```

In this code, we use the `os.Stat()` function to get information about a file. This function returns an os.FileInfo object that contains information about the file and its size (`Size()`). We then print the size of each file. The error handling is important for situations where the file cannot be found or read.
