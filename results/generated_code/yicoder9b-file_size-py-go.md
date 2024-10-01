In Go language, you can use `os` and `path/filepath` packages to get the file information. Here is how we could implement this:

```go
package main

import (
	"fmt"
	"os"
	"path/filepath"
)

func main() {
	info, err := os.Stat("input.txt")
	if err != nil {
		panic(err) // replace this with proper error handling
	}
    fmt.Println(info.Size())
  
	// If the file is in root directory of your filesystem:
	absPath := filepath.Clean(filepath.Join("/", "input.txt"))
	infoRoot, err := os.Stat(absPath) 
	if err != nil {
		panic(err) // replace this with proper error handling
	}  
    fmt.Println(infoRoot.Size())
}
```
Please note that in Go there is no direct method like `os.path.getsize()` in Python, instead we have to use `os.Stat()` which returns a FileInfo which contains the file size. Also, to join paths you can use `filepath.Join()`.
