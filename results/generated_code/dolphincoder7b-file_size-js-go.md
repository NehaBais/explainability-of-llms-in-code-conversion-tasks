Golang doesn't have an equivalent to the FileSystemObject class and its properties and methods. However, you can create a similar functionality using file system APIs in Golang by opening files and reading their sizes. Here's how you could do it:

```go
package main

import (
    "fmt"
    "os"
    "path/filepath"
)

func checkFile(filename string) {
    info, err := os.Stat(filename)
    if os.IsNotExist(err) {
        fmt.Printf("%s does not exist\n", filename)
    } else if err != nil {
        fmt.Println("Error:", err)
    } else {
        sizeInBytes := info.Size()
        sizeInKB := float64(sizeInBytes)/1024
        fmt.Printf("%s is %f KB in size.\n", filename, sizeInKB)
    }
}

func main() {
    checkFile("input.txt")
    checkFile("/input.txt")
}
```

In this code, we use the os package's Stat function to get information about a file or directory (including its size). Then, we calculate and print the size in KB. The above script will output something like:


input.txt is 0.001256 KB in size.
/input.txt is 0.001256 KB in size.


Note that this script assumes that the input file exists, and it doesn't take into account potential errors while opening or reading files. You may want to add error handling logic for better user experience if required.
