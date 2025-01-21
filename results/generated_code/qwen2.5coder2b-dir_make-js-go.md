The equivalent Golang code for this JavaScript function can be implemented as follows. The `os` package in Go is used to interact with operating system services, including creating directories.

```go
package main

import (
	"fmt"
	"os"
)

func mkdirp(p string) error {
	return os.MkdirAll(p, 0755)
}

func main() {
	path := "./path/to/dir"
	err := mkdirp(path)
	if err != nil {
		fmt.Println("Error creating directory:", err)
	} else {
		fmt.Println("Directory created successfully.")
	}
}
```

In the above code:
- `os.MkdirAll` is used to create a directory and its parent directories if they do not exist.
- The third argument `0755` specifies the access mode of the new directory, where `0755` equals `rwxr-xr-x`.

This function ensures that all intermediate parent directories are created as needed, regardless of operating system (Unix/Linux/Mac OS).

Please note that Golang does not have a direct equivalent to JavaScript's `path.resolve` and `cb` callback for asynchronous operations. If you need to run this in a non-Golang environment, then you would need to use an external library that provides similar functionality.
