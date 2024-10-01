In Golang, you can use the `os` package's function `MkdirAll()` to achieve this. Here is the equivalent implementation in Golang:

```go
package main

import (
	"fmt"
	"os"
)

func mkdirp(path string) error {
    err := os.MkdirAll(path, 0755) // You can set your own permissions if you want
    if err != nil && !os.IsExist(err) {
        return fmt.Errorf("Error creating directory: %s", err)
    }
    return nil
}

func main() {
    err := mkdirp("/path/to/dir")
    if err != nil {
        fmt.Println(err)
    } else {
        fmt.Println("Directory created successfully")
    }
}
```

This function will create a directory at the given path, along with any parent directories that do not yet exist. If the directory already exists, it will return `nil` without creating a new one. 

Please note that in order to run this code successfully, you need have Go installed on your machine and set up the necessary environment variables.
