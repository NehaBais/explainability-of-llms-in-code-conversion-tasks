package main

import (
	"fmt"
	"os"
	"path/filepath"
)

func checkExists(filename string) {
	_, err := os.Stat(filename)
	if os.IsNotExist(err) {
		fmt.Printf("%s does not exist\n", filename)
	} else if err != nil {
		fmt.Println("Error checking file: ", err)
	} else {
		fmt.Printf("%s exists\n", filename)
	}
}

func checkFolder(folder string) {
	_, err := os.Stat(folder)
	if os.IsNotExist(err) {
		fmt.Printf("%s does not exist\n", folder)
	} else if err != nil {
		fmt.Println("Error checking directory: ", err)
	} else {
		fmt.Printf("%s exists\n", folder)
	}
}

func main() {
	// Check for existence of a file in the current working directory
	checkExists(filepath.Join(os.Getenv("PWD"), "input.txt"))

	// Check for existence of a file in the root directory
	checkExists("/input.txt")

	// Check for existence of a directory in the current working directory
	checkFolder(filepath.Join(os.Getenv("PWD"), "docs"))

	// Check for existence of a directory in the root directory
	checkFolder("/docs")
}
