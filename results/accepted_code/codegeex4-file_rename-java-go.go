package main

import (
	"fmt"
	"os"
)

func renameFile(oldname string, newname string) bool {
	err := os.Rename(oldname, newname)
	return err == nil
}

func test(typeStr string, oldname string, newname string) {
	fmt.Printf("The following %s called %s " + 
		(renameFile(oldname, newname) ? "was renamed as" : "could not be renamed into") + 
		"%s.\n", typeStr, oldname, newname)
}

func main() {
	test("file", "input.txt", "output.txt")
	test("file", "/input.txt", "/output.txt")
	test("directory", "docs", "mydocs")
	test("directory", "/docs/", "/mydocs/")
}