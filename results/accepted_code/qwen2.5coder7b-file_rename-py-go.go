package main

import (
	"fmt"
	"os"
)

func renameInDirectory(directory string) {
	err := os.Rename(directory+"input.txt", directory+"output.txt")
	if err != nil {
		fmt.Println("Error renaming file:", err)
	}

	err = os.Rename(directory+"docs", directory+"mydocs")
	if err != nil {
		fmt.Println("Error renaming directory:", err)
	}
}

func renameInRoot() {
	err := os.Rename("/input.txt", "/output.txt")
	if err != nil {
		fmt.Println("Error renaming file in root:", err)
	}

	err = os.Rename("/docs", "/mydocs")
	if err != nil {
		fmt.Println("Error renaming directory in root:", err)
	}
}

func main() {
	// Rename files and directories in current working directory
	renameInDirectory(".")

	// Rename files and directories in filesystem root
	renameInRoot()
}
