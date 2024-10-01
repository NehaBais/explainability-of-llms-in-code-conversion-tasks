This is a straightforward conversion of the given C code to Golang. It involves including necessary libraries and then defining `main` function that gets file stats using `stat`. Here's the equivalent Go code:
```go
package main
import (
    "fmt"
    "os"
)
func main() {
    var foo os.FileInfo
    stat, _ := os.Stat("input.txt")
    fmt.Printf("%d
", stat.Size())
    rootStat, _ := os.Stat("/")
    fmt.Printf("%d
", rootStat.Size())
}
```
Note that in Golang, we use `os` package for file operations and `os.FileInfo` struct for getting file stats. The equivalent of C's `stat` is `os.Stat`, which returns a FileInfo struct. 

Also note the use of `%d` format specifier to print numbers. In C it's necessary to cast `st_size` as int to be able to printf the result, but in Go we don't need that since integers are already printed with their decimal equivalents (i.e., they're not formatted as strings like in C).
The `_` after errors is a common idiom in Go which says "I'm going to ignore this error". If you want to handle the error, remove the underscore and use an `err` variable instead of using underscores for all variables.
