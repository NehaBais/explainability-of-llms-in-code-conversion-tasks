The Go code below accomplishes the same task as your C code, namely to verify the size of a file in the current working directory and root filesystem respectively.

Please note that you need to have the necessary permissions to read files from different locations. If not possible, it will return errors while trying to open such files. 

```go
package main

import (
    "fmt"
    "os"
)

func fileSize(filename string) (int64, error) {
    fInfo, err := os.Stat(filename)
    if err != nil {
        return 0, err
    }
    return fInfo.Size(), nil
}

func main() {
    size, err := fileSize("input.txt")
    if err == nil {
        fmt.Println(size)
    } else {
        fmt.Println(err)
    }
    
    // Uncomment below to check root directory files as well 
    /*
    size, err = fileSize("/input.txt")
    if err == nil {
        fmt.Println(size)
    } else {
        fmt.Println(err)
    }
    */
}
```
This Go code opens the file and uses os.Stat to retrieve its size, which is then printed. If any error occurs during this process, it will be reported via fmt.Println(). 

Please note that '/input.txt' would refer to a file in root directory of the filesystem, if existent. The Go way is not to write absolute paths as "/" would be taken to mean the root directory but in Unix-like systems (including Linux and MacOS), it is typically unnecessary or unexpected to include it when specifying relative paths from the root ("/"). 

If you still want to check for the file at this location, uncomment the last two lines. Please be cautious using these kind of operations on system files without adequate permissions as they could lead to serious security risks!

