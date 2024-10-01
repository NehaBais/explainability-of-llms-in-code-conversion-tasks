 Below is the Golang equivalent for the JavaScript code you provided above:

```go
package main

import (
	"fmt"
	"path/filepath"
	"os"
)

func mkdirp(p string, cb func(error)) {
    err := os.MkdirAll(p, 0755)
    
    if err == nil {
        fmt.Println("Directory created successfully")
    } else {
        switch v := err.(type) {
            case *os.PathError:
                if v.Err != nil && v.Err.Error() == "parent directory does not exist"{
                    mkdirp(filepath.Dir(p), cb)
                    mkdirp(p, cb)
                }
        default:
            fmt.Println("Other error occurred.")
            cb(err)
        }
    }
}
```
You can call the `mkdirp` function with a path string as an argument to create directory and any missing parents. If there is no error, it would print "Directory created successfully". Otherwise, based on the type of error, it may switch case and retry creating the parent directory or return other errors.
