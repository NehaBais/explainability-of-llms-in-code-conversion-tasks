The equivalent code in Go would be:

```go
package main

import (
    "fmt"
    "io/ioutil"
    "os"
)

func checkFile(dir, file string) bool {
    var err error
    if _, err = ioutil.ReadFile(fmt.Sprintf("%s/%s", dir, file)); os.IsNotExist(err) {
        return false
    }
    return true
}

func main() {
    currentDir := "."
    rootDir := "/"

    fmt.Println("Current directory:")
    if checkFile(currentDir, "input.txt") && checkFile(rootDir, "input.txt") {
        fmt.Println("Both files exist.")
    } else {
        fmt.Println("One or both file does not exist.")
    }

    fmt.Println("\nRoot directory:")
    if checkFile(rootDir, "docs") && checkFile(rootDir, "docs/") { // Directory is treated as a file here
        fmt.Println("Both directories exist.")
    } else {
        fmt.Println("One or both directories do not exist.")
    }
}
```

In the above code, `ioutil.ReadFile()` function from Go's standard library reads the contents of the specified path. If an error is returned and it’s an instance of `os.IsNotExist()`, then the file does not exist.

`fmt.Sprintf("%s/%s", dir, file)` constructs a string in the format "dir/file". We're assuming that if the directory is `/docs` (and not `/docs/`) because in Go, directories are treated as files. 

The main function calls `checkFile()` for both the current working directory and the root directory.
