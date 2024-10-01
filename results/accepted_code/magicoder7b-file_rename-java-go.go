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
