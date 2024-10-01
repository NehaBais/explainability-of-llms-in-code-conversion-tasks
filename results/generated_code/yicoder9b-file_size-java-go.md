In Go language there is no built-in method to get the size of a file like in Java. However we can use os and path/filepackage to achieve it:

```go
package main

import (
	"fmt"
	"os"
	"path/filepath"
)

func main() {
	infoA, err := os.Stat("input.txt")
    if err != nil {
        panic(err)
    }
    fmt.Printf("%d B\n", infoA.Size())

	infoB, err := os.Stat(filepath.Join("/", "input.txt"))
    if err != nil {
        panic(err)
    }
    fmt.Printf("%d B\n", infoB.Size())
}
```
The os.Stat() function returns FileInfo interface which holds the file information like name, size etc. The Size() method of FileInfo is used to get the size of the file in bytes.
In Go Lang, it is good practice to check for any errors that may occur during the execution and handle them appropriately. In this case we've simply panicked if an error occurs which would be appropriate for a main function but not all functions as errors from certain system calls should not stop the program, e.g. user input validation or file operations etc.
