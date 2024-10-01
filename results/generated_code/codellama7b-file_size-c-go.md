
Here's the equivalent code in Go:
```go
package main

import (
	"fmt"
	"os"
)

func main() {
	var foo os.FileInfo
	foo, _ = os.Stat("input.txt")
	fmt.Println(foo.Size())
	foo, _ = os.Stat("/input.txt")
	fmt.Println(foo.Size())
}
```
Note that the `os` package in Go provides functions for working with files and directories, including `Stat`, which returns information about a file or directory, and `FileInfo`, which contains information about the file such as its size. The `main` function in this code uses these functions to get information about the file "input.txt" in the current working directory, and another one in the root of the file system with the same name, and prints their sizes to the console using the `fmt.Println` function.

Also note that the `_` variable is used to ignore any errors that may occur when calling the `Stat` function. In Go, it's common practice to use a single underscore when ignoring an error, as it helps readers of the code quickly understand that the error is being ignored.
