package main

import (
	"os"
	"path/filepath"
)

func renameFile(oldName, newName string) {
	err := os.Rename(oldName, newName)
	if err != nil {
		panic(err) // or handle the error in some other way
	}
}

func main() {
	cwd, _ := os.Getwd()
	renameFile(filepath.Join(cwd, "input.txt"), filepath.Join(cwd, "output.txt"))
	renameFile(filepath.Join(cwd, "docs"), filepath.Join(cwd, "mydocs"))

	// Rename files in root directory
	rootDir := string([]rune(cwd)[0:1]) // Get the name of the root directory depending on the OS
	renameFile(filepath.Join(rootDir, "input.txt"), filepath.Join(rootDir, "output.txt"))
	renameFile(filepath.Join(rootDir, "docs"), filepath.Join(rootDir, "mydocs"))
}
