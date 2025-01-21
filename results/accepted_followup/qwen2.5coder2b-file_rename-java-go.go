package main

import (
	"fmt"
	"io/ioutil"
	"os"
)

func renameFile(oldname string, newname string) {
	oldPath := oldname
	newPath := newname

	err := os.Rename(oldPath, newPath)
	if err != nil {
		fmt.Println("Failed to rename file:", err)
		return
	}
}

func test(type string, oldname string, newname string) {
	fmt.Printf("The following %s called %s ", type, oldname)
	if renameFile(oldname, newname) {
		fmt.Printf("was renamed as %s.\n", newname)
	} else {
		fmt.Printf("could not be renamed into %s.\n", newname)
	}
}

func main() {
	test("file", "input.txt", "output.txt")
	test("file", "./input.txt", "./output.txt")
	test("directory", "docs", "mydocs")
	test("directory", "./docs/", "./mydocs/")
}