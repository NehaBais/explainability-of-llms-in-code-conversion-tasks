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