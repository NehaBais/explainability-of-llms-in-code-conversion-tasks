Here is the equivalent code in Golang:

```go
package main

import (
	"os"
)

func create(directory string) {
	os.Create(path.Join(directory, "output.txt"))
	os.Mkdir(path.Join(directory, "docs"), 0755)
}

func main() {
	create(".") // current directory
	create("/") // root directory
}
```

This Go code creates an empty file and a new directory using the `os` package in Go. The `path.Join()` function is used to create a path to the file and directory. For creating a directory, we use the `0755` permission which allows read, write, and execute permissions for the owner and read and execute permissions for all other users.
