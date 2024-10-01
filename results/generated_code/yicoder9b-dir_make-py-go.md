In Go language there is no direct equivalent to Python's `os.makedirs()` function. However the `os` package contains a `MkdirAll()` function which can be used for similar purpose. Here it is:

```go
package main

import (
    "os"
    "path/filepath"
)

func mkdirp(path string) error {
    return os.MkdirAll(filepath.Clean(path), 0750)
}

func main() {
    err := mkdirp("/path/to/directory") 
    if err != nil {
        log.Fatal(err) // or handle the error in some other way
    }
    // your code here
}
```

This function creates a directory and any missing parents of the provided path. If the directory already exists, it will return `nil` (indicating success or no error). The `os.MkdirAll()` function handles the case where some but not all directories in the path already exist - it will only create those that are missing.
It is also using the `path/filepath` package to ensure any possible ".." or "." components of paths are resolved out, which makes sure the function works equally well cross-platform as Python's `os.makedirs()` do.
Note: 0750 is the permission for the directory, you may change it according to your needs.

This code should be placed in a file that will be compiled into an executable, and used like any other function within that program.
