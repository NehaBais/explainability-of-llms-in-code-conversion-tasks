 The error is because the `io/ioutil` package is imported but not used in the Go file "file_size.go". Since we are using function from this package, it must be referenced somewhere in our program. If you don't use functions or variables from a certain package, then you might encounter an error like this.

The fix is to import `io/ioutil` and use one of its functions that fits your needs. For example, if we are only using `ReadFile`, we could simply remove the import statement for `io/ioutil`. However, since our program uses `fileSize`, which is a function from `io/ioutil`, the import cannot be removed.

Here's the corrected code:
```go
package main

import (
	"fmt"
	"os"
	"path/filepath"
	"io/ioutil"
)

func printFileSize(filename string) {
	size, err := fileSize(filename)
	if err != nil {
		fmt.Println(err)
	} else {
		fmt.Printf("Size of file %s is %d bytes.\n", filename, size)
	}
}

func fileSize(filePath string) (int64, error) {
	info, err := os.Stat(filePath)
	if err != nil {
		return 0, fmt.Errorf("unable to get the file size: %s", err.Error())
	}
	return info.Size(), nil
}

func main() {
	printFileSize(filepath.Join(".", "input.txt"))
	printFileSize("/input.txt")
}
```
