The equivalent code in Golang would be:

```go
package main

import (
    "os"
    "log"
)

func createDir(path string) {
    if _, err := os.Stat(path); os.IsNotExist(err) {
        err = os.MkdirAll(path, 0755)
        if err != nil {
            log.Fatal(err)
        }
    }
}

func main() {
    createDir("./parent/test")
}
```

This code creates a function `createDir` that checks whether a directory at the given path exists using `os.Stat`. If it does not exist, then it uses `os.MkdirAll` to create all parent directories and the specified directory itself with read, write and execute permissions for the owner (0755). It will print an error log in case of any issue encountered during creation.

