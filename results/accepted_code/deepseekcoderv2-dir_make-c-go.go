package main

import (
	"fmt"
	"os"
	"path/filepath"
)

func mkdirp(path string) error {
	// Ensure all necessary parent directories are created
	dir := filepath.Dir(path)
	if dir == "." || dir == "/" {
		return nil
	}
	err := os.MkdirAll(dir, 0755)
	if err != nil && !os.IsExist(err) {
		return err
	}
	// Check if the path is a directory
	fileInfo, err := os.Stat(path)
	if err == nil && fileInfo.IsDir() {
		return nil
	} else if err != nil && !os.IsNotExist(err) {
		return err
	}
	// Create the directory if it does not exist
	err = os.Mkdir(path, 0755)
	if err != nil && !os.IsExist(err) {
		return err
	}
	return nil
}

func main() {
	if len(os.Args) != 2 {
		fmt.Fprintf(os.Stderr, "usage: %s <path>\n", filepath.Base(os.Args[0]))
		os.Exit(1)
	}
	path := os.Args[1]
	err := mkdirp(path)
	if err != nil {
		fmt.Fprintf(os.Stderr, "Error creating directory: %v\n", err)
		os.Exit(1)
	}
}
