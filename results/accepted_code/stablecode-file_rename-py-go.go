package main

import (
	"os"
	"path/filepath"
)

func renameFile(src, dest string) {
	_, err := os.Stat(dest)
	if err == nil {
		// If the destination file already exists, we will not overwrite it.
		return
	}

	err = os.Rename(src, dest)
	if err != nil {
		// Handle error
		panic(err)
	}
}

func renameDirectory(src, dest string) {
	_, err := os.Stat(dest)
	if err == nil {
		// If the destination directory already exists, we will not overwrite it.
		return
	}

	err = os.Rename(src, dest)
	if err != nil {
		// Handle error
		panic(err)
	}
}

func main() {
	// Rename input.txt to output.txt
	renameFile("input.txt", "output.txt")

	// Rename docs directory to mydocs
	renameDirectory("docs", "mydocs")

	// Repeat the process for root directory
	renameFile(filepath.Join(os.Getenv("SYSTEMDRIVE"),"input.txt"), filepath.Join(os.Getenv("SYSTEMDRIVE"),"output.txt"))
	renameDirectory(filepath.Join(os.Getenv("SYSTEMDRIVE"),"docs")), filepath.Join(os.Getenv("SYSTEMDRIVE"),"mydocs")
}