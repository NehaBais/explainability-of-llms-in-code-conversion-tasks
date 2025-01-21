The error message is "expected 'package', found 'import'", which occurs because the Go language requires that all go files start with the statement `package main`. The missing package declaration at the beginning of the file causes the compilation to fail. 

To fix this issue, we can add an empty line after the code block and then add a package declaration:

```go
package main

import  (
     "os"
     "syscall"
     "strings"
     "strconv"
     "errors"
)

// ErrExist is the error returned when a non-directory file or directory that already exists is given.
var ErrExist = errors.New("file already exists")

func mkdirp(path string)  (err error)  {
    var mask syscall.Umask[1]
    defer func()  {
        syscall.Umask[1] = mask
        if err != nil && err == os.ErrExist {
            return
         }
        if e := os.MkdirAll(path, 0777); e != nil {
            err = e
        }
    }()

    for len(path) > 0  {
        root, file  := splitPath(path)
        if err = os.Mkdir(root, 0777); err == nil || !os.IsExist(err) {
            break
         }
        path  = root
     }
    return
}

func splitPath(path string)  (string, string)  {
    i  := strings.LastIndexByte(path[1:], '/') + 2
    if i <= 0  {
        i  = len(path)
     }
    return path[:i-1], path[i:]
}
```

Now the code should compile successfully.
