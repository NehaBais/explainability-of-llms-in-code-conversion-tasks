package main

import (
	"fmt"
	"os"
	"path/filepath"
)

func checkFileAndDirExists(path string) {
	exists, err := exists(path)
	if err != nil {
		fmt.Printf("Error checking path %s: %v\n", path, err)
		return
	}

	if exists {
		fmt.Printf("Path %s exists.\n", path)
	} else {
		fmt.Printf("Path %s does not exist.\n", path)
	}
}

func exists(path string) (bool, error) {
	_, err := os.Stat(path)
	if err == nil {
		return true, nil
	}
	if os.IsNotExist(err) {
		return false, nil
	}
	return false, err
}

func main() {
	// Check current working directory
	currentDir, _ := os.Getwd()
	checkFileAndDirExists(filepath.Join(currentDir, "input.txt"))
	checkFileAndDirExists(filepath.Join(currentDir, "docs"))

	// Check filesystem root (C:\ on Windows)
	rootPath := `C:\`
	checkFileAndDirExists(filepath.Join(rootPath, "input.txt"))
	checkFileAndDirExists(filepath.Join(rootPath, "docs"))
}
