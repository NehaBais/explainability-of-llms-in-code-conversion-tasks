package main

import (
	"fmt"
	"os"
)

func rename(oldName string, newName string) error {
	return os.Rename(oldName, newName)
}

func test(typeName string, oldName string, newName string) {
	err := rename(oldName, newName)
	if err != nil {
		fmt.Printf("Could not rename the %s called %s to %s\n", typeName, oldName, newName)
	} else {
		fmt.Printf("%s %s successfully renamed to %s\n", typeName, oldName, newName)
	}
}

func main() {
	test("file", "input.txt", "output.txt")
	test("directory", "docs", "mydocs")
}
