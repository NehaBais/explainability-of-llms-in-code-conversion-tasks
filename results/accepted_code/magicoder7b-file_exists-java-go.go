package main

import (
	"fmt"
	"os"
)

func checkFileAndDirectoryExistence() {
	// Checking for a file and a directory in the current working directory.
	if _, err := os.Stat("docs/input.txt"); err == nil {
		fmt.Println("The file exists.")
	} else {
		fmt.Printf("The file does not exist: %v\n", err)
	}

	// Checking for a file and a directory in the filesystem root.
	if _, err := os.Stat("/docs/input.txt"); err == nil {
		fmt.Println("The file exists.")
	} else {
		fmt.Printf("The file does not exist: %v\n", err)
	}
}

func main() {
	checkFileAndDirectoryExistence()
}
