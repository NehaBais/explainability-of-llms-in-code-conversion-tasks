package main

import (
	"fmt"
	"os"
)

func renameFile(oldname string, newname string) bool {
	// Create a File object for the old name
	file := os.File{Name: oldname}

	// Create a File object for the new name
	newFile := os.File{Name: newname}

	// Rename the file (or directory)
	success := file.RenameTo(newFile)

	return success
}

func main() {
	renameFile("input.txt", "output.txt")
	renameFile(os.PathSeparator+"input.txt", os.PathSeparator+"output.txt")
	renameDirectory("docs", "mydocs")
	renameDirectory(os.PathSeparator+"docs"+os.PathSeparator, os.PathSeparator+"mydocs"+os.PathSeparator)
}
