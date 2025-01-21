package main

import (
	"fmt"
	"os"
)

func renameFile(oldname, newname string) bool {
	// File (or directory) with old name
	err := os.Rename(oldname, newname)
	if err == nil {
		return true
	}
	return false
}

func test(typ, oldname, newname string) {
	success := renameFile(oldname, newname)
	fmt.Printf("The following %s called %s was renamed as %s.\n", typ, oldname, newname)
	if !success {
		fmt.Printf("The following %s could not be renamed into %s.\n", oldname, newname)
	}
}

func main() {
	test("file", "input.txt", "output.txt")
	test("file", "/input.txt", "/output.txt")
	test("directory", "docs", "mydocs")
	test("directory", "/docs/", "/mydocs/")
}
