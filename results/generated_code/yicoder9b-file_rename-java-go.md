Below is the equivalent Golang code for the Java program given above.

```go
package main

import (
    "os"
    "fmt"
)

func renameFile(oldname, newname string) bool {
    err := os.Rename(oldname, newname)
    if err != nil {
        return false
    }
    return true
}

func test(typeName, oldname, newname string) {
    renameResult := renameFile(oldname, newname)
    fmt.Println("The following " + typeName + " called " + oldname + 
        (renameResult ? " was renamed as " : " could not be renamed into ") 
        + newname + "."
    )
}

func main() {
	sep := os.PathSeparator

    test("file", "input.txt", "output.txt")
    test("file", string(sep) + "input.txt", string(sep) + "output.txt")
    test("directory", "docs" + string(sep), "mydocs" + string(sep))
    test("directory", string(sep) + "docs" + string(sep), string(sep) + "mydocs" + string(sep))
}
```

Please note that:
- The os package from the standard library is used to rename files and directories.
- The os.PathSeparator constant returns the appropriate path separator for the current OS ('/' on Unix systems, '\\' on Windows). This is used when renaming files in the filesystem root.
