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
