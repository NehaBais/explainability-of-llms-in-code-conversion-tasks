Error: `filepath.MkdirAll` is undefined

Correction: Import the "path/filepath" package at the beginning of the Go program, as it contains the `MkdirAll` function which creates directories and their parents if they do not already exist.

Corrected Go code:
```go
package main

import (
	"fmt"
	"os"
	"path/filepath"
)

func main() {
	args := os.Args
	if len(args) != 2 {
		fmt.Println("usage: mkdir <path>")
		return
	}

	dir := args[1]
	err := filepath.MkdirAll(dir, 0755)
	if err == nil {
		return
	} else if os.IsExist(err) {
		fmt.Println("Directory already exists:", dir)
		return
	} else {
		fmt.Println("Couldn't create directory: ", dir, "- Error:", err)
		return
	}
}

```
