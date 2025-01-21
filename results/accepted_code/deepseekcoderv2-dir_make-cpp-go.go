package main

import (
	"fmt"
	"os"
)

func mkdirAll(path string) error {
	if _, err := os.Stat(path); os.IsNotExist(err) {
		// If the directory does not exist, create it and its parents recursively
		err = os.MkdirAll(path, 0755) // 0755 is the default permission for directories in POSIX systems
		if err != nil {
			return fmt.Errorf("couldn't create directory: %s", path)
		}
	} else if err != nil {
		return fmt.Errorf("failed to check directory existence: %v", err)
	}
	// If the directory already exists, return successfully
	return nil
}

func main() {
	if len(os.Args) != 2 {
		fmt.Println("usage: mkdir <path>")
		os.Exit(1)
	}

	pathToCreate := os.Args[1]
	err := mkdirAll(pathToCreate)
	if err != nil {
		fmt.Println(err)
		os.Exit(1)
	}
}
