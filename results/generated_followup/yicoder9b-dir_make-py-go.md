The error occurred because Go language does not have an in-built logging module like Python's `logging` package. The line `log.Fatal(err)` would fail to compile as it refers to the undefined symbol "log". 

To fix this, you need to import the `log` package at the beginning of your code:

Here is the correct code with all corrections included:

```go
package main

import (
	"os"
	"path/filepath"
	"log"
)

func mkdirp(path string) error {
	return os.MkdirAll(filepath.Clean(path), 0750)
}

func main() {
	err := mkdirp("/path/to/directory")
	if err != nil {
		log.Fatal(err) // handle the error in a way that fits your program's needs
	}
	// your code here
}
```
