The equivalent Go code for the JavaScript code you provided would look something like this:

```go
package main

import (
    "fmt"
    "os"
)

func main() {
    err := os.Rename("input.txt", "output.txt")
    if err != nil {
        fmt.Println(err)
        return
    }

    err = os.Rename("c:/input.txt", "c:/output.txt")
    if err != nil {
        fmt.Println(err)
        return
    }

    err = os.Rename("docs", "mydocs")
    if err != nil {
        fmt.Println(err)
        return
    }

    err = os.Rename("c:/docs", "c:/mydocs")
    if err != nil {
        fmt.Println(err)
        return
    }

    fmt.Println("Renaming successful.")
}
```

Please note that the Go language does not directly support the `ActiveXObject` for file system operations like renaming files or directories, so we can use the built-in `os` package in Go which provides similar functionality. Also, you should handle errors properly as shown in the code above.
