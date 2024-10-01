Here is the equivalent code in Golang:

```golang
package main

import (
	"fmt"
	"os"
)

func renameFile(oldName, newName string) bool {
	err := os.Rename(oldName, newName)
	if err != nil {
		return false
	}
	return true
}

func test(typ, oldName, newName string) {
	fmt.Printf("The following %s called %s was %s as %s.\n", typ, oldName, func() string {
		if renameFile(oldName, newName) {
			return "renamed"
		} else {
			return "not renamed into"
		}
	}(), newName)
}

func main() {
	test("file", "./input.txt", "./output.txt")
	test("directory", "/docs", "/mydocs")
}
```

This code does the same as your Java code, but it doesn't check for absolute paths, so it will not work as expected if run from another directory. If you want to handle that case, you could modify the `test` function to take in a full path and then use `filepath.Join` to create the new path based on the old name and new name.
