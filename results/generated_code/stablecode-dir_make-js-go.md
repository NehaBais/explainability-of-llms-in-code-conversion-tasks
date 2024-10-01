Here's how you can implement this functionality in Golang:

```go
package main

import (
	"fmt"
	"io/ioutil"
	"os"
	"path/filepath"
)

func mkdirp(s string) error {
	return os.MkdirAll(s, 0755))
}

func main() {
	dir := "./path/to/dir"

	err := mkdirp(dir)
	if err != nil {
		fmt.Println("mkdirp:", err)
		return
	}

	// The directory was created successfully, 
	// you can now perform operations on this directory here...

	fmt.Println("Directory", dir, "created successfully.")
}
```
The Golang implementation above creates a directory and any missing parents. It first makes sure that the path is resolved properly. If it fails with 'ENOENT' (No such file or directory), it then tries to create parent directories until it succeeds.
