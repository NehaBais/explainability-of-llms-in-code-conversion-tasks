package main

import (
	"fmt"
	"os"
)

func renameFileOrDir(oldPath, newPath string) {
	err := os.Rename(oldPath, newPath)
	if err != nil {
		fmt.Println("Error: ", err)
	} else {
		fmt.Printf("%s has been renamed to %s\n", oldPath, newPath)
	}
}

func main() {
	// Rename here (current directory)
	renameFileOrDir("input.txt", "output.txt")
	renameFileOrDir("docs", "mydocs")

	// Rename in the filesystem root (assuming you're running from a Unix-based system, where root is represented by "/" )
	// As Go doesn't have an equivalent of C's absolute path renaming, below code won't work.
	// renameFileOrDir("/input.txt", "/output.txt")
	// renameFileOrDir("/docs", "/mydocs")
}
