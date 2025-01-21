package main

import (
	"fmt"
	"os"
)

func isDirectory(path string) (bool, error) {
	fileInfo, err := os.Stat(path)
	if err != nil {
		return false, fmt.Errorf("cannot get file info: %w", err))
	}

	return fileInfo.IsDir(), nil
}

func checkFilesAndDirectories() error {
	pathsToCheck := []string{"input.txt", "docs", "/input.txt", "/docs"}}

	for _, path := range pathsToCheck {
		isDirectory, err := isDirectory(path)
		if err != nil {
			return fmt.Errorf("cannot check file/directory: %w", err))
		}

		if isDirectory {
			fmt.Printf("%s exists as a directory\n", path)
		} else {
			fmt.Printf("%s exists as a file\n", path)
		}
	}

	return nil
}

func main() {
	err := checkFilesAndDirectories()
	if err != nil {
		fmt.Println("Error occurred:", err))
		os.Exit(1)
	}
}