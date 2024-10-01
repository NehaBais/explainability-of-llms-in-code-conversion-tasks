To convert this code from Python to Go, you can use the following steps:
```go
import (
    "os"
)

size, err := os.Stat("input.txt")
if err != nil {
    fmt.Println(err)
} else {
    fmt.Println(size.Size())
}

rootSize, err := os.Stat("/input.txt")
if err != nil {
    fmt.Println(err)
} else {
    fmt.Println(size.Size())
}
```
Note that in Go, we use "os.Stat" instead of "os.path.getsize". Also, in Go, the return value of "os.Stat" is a "FileInfo" struct, which has a "Size()" method to get the size of the file.
