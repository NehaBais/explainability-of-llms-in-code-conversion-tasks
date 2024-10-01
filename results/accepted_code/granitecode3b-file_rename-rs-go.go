package main

import (
	"fmt"
	"os"
)

func main() {
	err := moveFile("input.txt", "output.txt")
	if err != nil {
		fmt.Println(err)
	}

	err = moveDir("docs", "mydocs")
	if err != nil {
		fmt.Println(err)
	}

	err = moveRootFile("/input.txt", "/output.txt")
	if err != nil {
		fmt.Println(err)
	}

	err = moveRootDir("/docs", "/mydocs")
	if err != nil {
		fmt.Println(err)
	}
}

func moveFile(oldName, newName string) error {
	return os.Rename(oldName, newName)
}

func moveDir(oldName, newName string) error {
	err := os.Rename(oldName, newName)
	if err != nil {
		return fmt.Errorf("failed to rename directory: %w", err)
	}

	files, err := os.ReadDir(newName)
	if err != nil {
		return fmt.Errorf("failed to read directory contents: %w", err)
	}

	for _, file := range files {
		newPath := fmt.Sprintf("%s/%s", newName, file.Name())
		err = moveFile(fmt.Sprintf("%s/%s", oldName, file.Name()), newPath)
		if err != nil {
			return fmt.Errorf("failed to move file: %w", err)
		}
	}

	return nil
}

func moveRootFile(oldName, newName string) error {
	return os.Rename(fmt.Sprintf("/%s", oldName), fmt.Sprintf("/%s", newName))
}

func moveRootDir(oldName, newName string) error {
	err := os.Rename(fmt.Sprintf("/%s", oldName), fmt.Sprintf("/%s", newName))
	if err != nil {
		return fmt.Errorf("failed to rename directory: %w", err)
	}

	files, err := os.ReadDir("/")
	if err != nil {
		return fmt.Errorf("failed to read directory contents: %w", err)
	}

	for _, file := range files {
		newPath := fmt.Sprintf("%s/%s", "/", newName, file.Name())
		err = moveFile(fmt.Sprintf("/%s/%s", oldName, file.Name()), newPath)
		if err != nil {
			return fmt.Errorf("failed to move file: %w", err)
		}
	}

	return nil
}
