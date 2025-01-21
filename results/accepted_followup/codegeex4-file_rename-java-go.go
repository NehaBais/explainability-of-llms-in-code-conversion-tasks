package main

import (
	"fmt"
	"os"
)

func renameFile(oldname string, newname string) bool {
	err := os.Rename(oldname, newname)
	if err != nil {
		return false
	} else {
		return true
	}
}

func test(typeStr string, oldname string, newname string) {
	var result string
	if renameFile(oldname, newname) {
		result = "was renamed as"
	} else {
		result = "could not be renamed into"
	}
	fmt.Printf("The following %s called %s %s %s.\n", typeStr, oldname, result, newname)
}

func main() {
	test("file", "input.txt", "output.txt")
	test("file", "/input.txt", "/output.txt")
	test("directory", "docs", "mydocs")
	test("directory", "/docs/", "/mydocs/")
}
