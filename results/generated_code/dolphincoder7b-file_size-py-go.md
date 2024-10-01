```go
package main

import (
    "fmt"
    "os"
)

func checkSize(filePath string, size *int64) {
    file, err := os.Open(filePath)
    if err != nil {
        panic(err)
    }

    stat, err := file.Stat()
    if err != nil {
        panic(err)
    }

    *size = stat.Size()
}

func main() {
    var size int64
    checkSize("input.txt", &size)
    fmt.Printf("%s: %d bytes\n", "input.txt", size)

    checkSize("/input.txt", &size)
    fmt.Printf("%s: %d bytes\n", "/input.txt", size)
}
```
In Go, you can achieve the same functionality using `os.Stat` and printing the file information instead of returning the size directly. Additionally, Golang supports the `panic` statement that is used to handle fatal errors in the code. The modified code includes error handling for both Opening the file and retrieving its information.
