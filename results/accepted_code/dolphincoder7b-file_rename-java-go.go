package main

import (
    "io"
    "os"
    "path/filepath"
)

func renameFile(oldName, newName string) bool {
    file, err := os.Open(oldName)
    if err != nil {
        return false
    }

    output, err := os.Create(newName)
    if err != nil {
        return false
    }

    _, err = io.Copy(output, file)
    if err != nil {
        return false
    }

    err = file.Close()
    if err != nil {
        return false
    }

    return true
}

func test(type string, oldName string, newName string) {
    renamed := renameFile(oldName, newName)
    outputStr := "The following" + type + "called" + oldName + (renamed ? " was renamed as" : " could not be renamed into") + newName + "."
    println(outputStr)
}

func main() {
    test("file", "input.txt", "output.txt")
    sep := filepath.Separator
    test("file", sep+"input.txt"+sep, sep+"output.txt"+sep)
    test("directory", "docs", "mydocs")
    test("directory", sep+"docs"+sep, sep+"mydocs"+sep)
}