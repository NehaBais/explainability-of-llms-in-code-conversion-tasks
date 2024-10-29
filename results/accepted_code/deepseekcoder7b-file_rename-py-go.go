package main

import (
	"fmt"
	"os"
)

func renameHere(oldName, newName string) {
	err := os.Rename(oldName, newName)
	if err != nil {
		fmt.Println("Error renaming file or directory:", err)
	} else {
		fmt.Printf("Successfully renamed %s to %s\n", oldName, newName)
	}
}

func renameInRoot(oldName, newName string) {
	err := os.Chdir("/")
	if err != nil {
		fmt.Println("Error changing directory:", err)
		return
	}
	renameHere(oldName, newName)
}

func main() {
	renameHere("input.txt", "output.txt")
	renameHere("docs", "mydocs")

	// Rename in root
	currentDir, err := os.Getwd()
	if err != nil {
		fmt.Println("Error getting current working directory:", err)
	} else {
		oldNameInRoot := fmt.Sprintf("%s%cinput.txt", currentDir, os.PathSeparator)
		newNameInRoot := fmt.Sprintf("%s%coutput.txt", currentDir, os.PathSeparator)

		renameInRoot(oldNameInRoot, newNameInRoot)
	}
}
