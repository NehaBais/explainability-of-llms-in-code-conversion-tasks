Below is the Go equivalent of your C++ code using standard libraries:

```go
package main

import (
	"fmt"
	"os"
)

func createDir(path string) error {
	if _, err := os.Stat(path); os.IsNotExist(err) {
		err = os.MkdirAll(path, 0755)
		if err != nil {
			return fmt.Errorf("couldn't create directory: %s", path)
		}
	}
	return nil
}

func main() {
	if len(os.Args) != 2 {
		fmt.Println("usage: mkdir <path>")
		os.Exit(-1)
	}

	err := createDir(os.Args[1])
	if err != nil {
		fmt<｜begin▁of▁sentence｜>.Println(err)
		os.Exit(-1)
	}
}
```
In the Go code, we use `os` package to interact with operating system and its file systems. Here is how it works:
- If you pass a path as argument to your program and that directory does not exist, `os.Stat(path)` will return an error because no such file or directory exists. In this case the error type will be of type *PathError and os.IsNotExist(err) will return true.
- If the directory does not exist, we call `os.MkdirAll(path, 0755)` which creates a new directory with given permission (readable, writable, executable by owner, group and others). This method also makes any necessary parent directories in the path.
- The function createDir will return an error if unable to create directory or nil otherwise. Main then checks for such errors and prints them accordingly.

