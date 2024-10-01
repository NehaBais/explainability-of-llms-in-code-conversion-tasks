 The equivalent Golang code for the given Rust code would look like:

```go
package main

import (
	"os"
	"path/filepath"
)

func createDirAll(dir string) error {
    return os.MkdirAll(dir, 0755)
}

func main() {
	err := createDirAll("./path/to/dir")
	if err != nil {
		panic(err)
	}
}
```

Please note that the above Golang code is equivalent to Rust's `fs::create_dir_all()` but it is not completely identical. The equivalent function in Go would be `os.MkdirAll()`, which creates a directory named by the argument, along with any necessary parents. It also returns an error if it occurs.
If no error occurs, it returns nil. If path exists, and it's already a directory, MkdirAll does nothing and returns nil. If there is an error in making the directory, that will be returned.
