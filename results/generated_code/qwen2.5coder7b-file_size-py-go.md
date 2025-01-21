Here is the equivalent code in Golang:

```go
package main
import (
    "fmt"
    "os"
)

func checkFileSize(filePath string) {
    fileInfo, err := os.Stat(filePath)
    if err != nil {
        fmt.Println("Error occurred:", err)
        return
    }
    
    size := fileInfo.Size()
    fmt.Printf("Size of file %s: %d bytes\n", filePath, size)
}

func main() {
    checkFileSize("./input.txt")
    checkFileSize("/input.txt")
}
```

In the Golang code above, we have a function `checkFileSize` that takes a file path as an argument. It uses the `os.Stat` function to get a `fileInfo` object containing information about the file. If there is an error retrieving this information (for example, if the file does not exist), the function prints out the error and returns. Otherwise, it gets the size of the file from the `fileInfo` object using `fileInfo.Size()` method.

In the `main` function, we call `checkFileSize` with two arguments: `"./input.txt"` (which refers to a file in the current directory) and `"/input.txt"` (which refers to a file in the root of the filesystem).
