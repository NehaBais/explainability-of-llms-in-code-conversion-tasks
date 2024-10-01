In Go, the os package provides functions for creating directories, including missing parents. Here is how you can do it:

```go
package main

import (
	"fmt"
	"os"
)

func createDirectory(path string) error {
    return os.MkdirAll(path, 0755)
}

func main() {
    err := createDirectory("C:/parent/test")
    if err != nil {
        fmt.Println(err)
    } else {
        fmt.Println("Path successfully created.")
    }
}
```

In this code, `os.MkdirAll()` will create all directories in the path argument and returns an error if any directory could not be created or if a non-directory file already exists at the given path. If there are no errors, it will print "Path successfully created." to the console. The permission bits are set with 0755.

Make sure that you have Go installed on your system and use the `go run` command to compile and run this code.
