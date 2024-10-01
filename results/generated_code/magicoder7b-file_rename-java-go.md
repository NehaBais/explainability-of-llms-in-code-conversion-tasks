 In Go language, you can use the `os` package's functions to perform file and directory operations. 

Here is your Java code converted into Golang:

```go
package main

import (
	"fmt"
	"os"
)

func renameFile(oldname string, newname string) bool {
	// Rename file
	err := os.Rename(oldname, newname)
	if err != nil {
		return false
	}
	return true
}

func test(typ string, oldname string, newname string) {
	fmt.Printf("The following %s called %s was renamed as %s.\n", typ, oldname, newname)
	if renameFile(oldname, newname) {
		fmt.Println("Rename operation succeeded.")
	} else {
		fmt.Println("Rename operation failed.")
	}
}

func main() {
	test("file", "input.txt", "output.txt")
	test("file", "/input.txt", "/output.txt")
	test("directory", "docs", "mydocs")
	test("directory", "/docs/", "/mydocs/")
}
```
Please note that in Unix systems, the root directory is represented as `/`, not just ``.
