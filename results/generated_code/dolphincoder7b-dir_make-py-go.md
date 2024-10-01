```go
import (
    "os"
    "syscall"
    "strings"
    "strconv"
    "errors"
)

// ErrExist is the error returned when a non-directory file or directory that already exists is given.
var ErrExist = errors.New("file already exists")

func mkdirp(path string) (err error) {
    var mask syscall.Umask[1]
    defer func() {
        syscall.Umask[1] = mask
        if err != nil && err == os.ErrExist {
            return
        }
        if e := os.MkdirAll(path, 0777); e != nil {
            err = e
        }
    }()

    for len(path) > 0 {
        root, file := splitPath(path)
        if err = os.Mkdir(root, 0777); err == nil || !os.IsExist(err) {
            break
        }
        path = root
    }
    return
}

func splitPath(path string) (string, string) {
    i := strings.LastIndexByte(path[1:], '/') + 2
    if i <= 0 {
        i = len(path)
    }
    return path[:i-1], path[i:]
}
```
In this solution, we use the `syscall` package to set and restore the file mode creation mask using `Umask`. This approach allows us to create directories with a specific permission without affecting other parts of the filesystem.

The function `mkdirp` takes a single path argument and creates it if it doesn't exist, or does nothing if it already exists. We break the input path into its parent directory (using the last occurrence of '/') and the file name, then iterate through each parent directory to create them if necessary. This is done by calling `os.Mkdir` for each parent directory, checking for errors and repeating until either all directories have been created or an error has occurred. If there is no error, we then create the input directory using `os.MkdirAll`.

The helper function `splitPath` is used to split a path into its root and file name components. It uses the `LastIndexByte` method of strings to find the last occurrence of '/', then extracts both components from the original path. The function returns these components as separate strings.
