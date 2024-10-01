package main

import (
	"fmt"
	"os"
)

func renameFile(oldname string, newname string) bool {
	// Check if the file or directory exists
	if _, err := os.Stat(oldname); !os.IsNotExist(err) {
		// Rename the file or directory
		err = os.Rename(oldname, newname)
		return err == nil
	} else {
		fmt.Println("The file or directory does not exist.")
		return false
	}
}
func test(fileType string, oldname string, newname string) {
	fmt.Print("Enter the " + fileType + ": ")
	var input string
	fmt.Scanln(&input)
	// Check if the file or directory exists
	if _, err := os.Stat(oldname); !os.IsNotExist(err) {
		if renameFile(oldname, newname) {
			fmt.Println("The "+fileType+" was renamed as: ", input)
		} else {
			fmt.Print("Could not be renamed into ")
			fmt.Println(input)
		}
	} else {
		fmt.Println("The file or directory does not exist.")
	}
}
func main() {
	test("file", "input.txt", "output.txt")
	test("directory", "/docs", "/mydocs")
}
