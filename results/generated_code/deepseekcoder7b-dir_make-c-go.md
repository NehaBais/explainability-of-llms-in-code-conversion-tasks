Below is the GoLang equivalent of your C code. I have utilized os and path packages in Golang to achieve the same thing as the C code you've provided.

Please note that error handling has been simplified for brevity, but ideally it should be improved. 

```go
package main

import (
	"os"
	"path/filepath"
)

func main() {
	dir := "./path/to/dir"
	if err := os.MkdirAll(dir, 0755); err != nil {
		panic(err)
	}
}
```
The `os.MkdirAll` function in GoLang creates a directory path along with any necessary parents and returns nil if the path is created or already exists. It handles cross-platform compatibility as per your requirement too, as long as you use it properly. For instance: on Unix systems this can be used to create parent directories with mode 0755 (read/write/execute for owner, read/execute for group and others).

The `filepath` package is typically just an interface to the underlying operating system's file path function. It provides useful functions like Join, Split etc., which can be used in conjunction with MkdirAll. 

For error handling, it is recommended that you include checks for common errors (like permission issues) and handle them properly. The code above does not include this because the `os.MkdirAll` function will panic on any error. Please replace the line "panic(err)" with your own appropriate error handling code.

