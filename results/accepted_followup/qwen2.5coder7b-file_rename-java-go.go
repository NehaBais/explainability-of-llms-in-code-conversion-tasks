package main

import (
	"fmt"
	"os"
)

func renameFile(oldname, newname string) bool {
	err := os.Rename(oldname, newname)
	return err == nil
}

func test(typeName, oldname, newname string) {
	fmt.Println("The following " + typeName + " called " + oldname +
		(if renameFile(oldname, newname) { " was renamed as " } else { " could not be renamed into " }) +
		newname + ".")
}

func main() {
	test("file", "input.txt", "output.txt")
	test("file", os.PathSeparator+"input.txt", os.PathSeparator+"output.txt")
	test("directory", "docs", "mydocs")
	test("directory", os.PathSeparator+"docs"+os.PathSeparator, os.PathSeparator+"mydocs"+os.PathSeparator)
}