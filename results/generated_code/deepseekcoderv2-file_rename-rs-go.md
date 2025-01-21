 Here's the equivalent code in Golang:

```go
package main

import (
	"fmt"
	"os"
)

func main() {
	err := "File move error"
	renameErr := os.Rename("input.txt", "output.txt")
	if renameErr != nil {
		fmt.Println(err, ":", renameErr)
	}
	renameErr = os.Rename("docs", "mydocs")
	if renameErr != nil {
		fmt.Println(err, ":", renameErr)
	}
	renameErr = os.Rename("/input.txt", "/output.txt")
	if renameErr != nil {
		fmt.Println(err, ":", renameErr)
	}
	renameErr = os.Rename("/docs", "/mydocs")
	if renameErr != nil {
		fmt.Println(err, ":", renameErr)
	}
}
```

This Golang code performs the same file renaming operations as the Rust code you provided. It renames `input.txt` to `output.txt` and `docs` to `mydocs`, both in the current working directory and in the filesystem root, with error handling for each rename operation.
