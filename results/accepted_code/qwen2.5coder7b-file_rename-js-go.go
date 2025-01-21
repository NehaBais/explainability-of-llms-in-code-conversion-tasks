package main

import (
	"fmt"
	"os"
)

func moveFile(src, dst string) error {
	err := os.Rename(src, dst)
	if err != nil {
		return fmt.Errorf("failed to rename file from %s to %s: %w", src, dst, err)
	}
	return nil
}

func moveFolder(src, dst string) error {
	err := os.Rename(src, dst)
	if err != nil {
		return fmt.Errorf("failed to rename directory from %s to %s: %w", src, dst, err)
	}
	return nil
}

func main() {
	// Rename file and folder in the current working directory
	cwd, err := os.Getwd()
	if err != nil {
		fmt.Println("Failed to get current working directory:", err)
		return
	}

	err = moveFile(cwd+"\\input.txt", cwd+"\\output.txt")
	if err != nil {
		fmt.Println(err)
		return
	}

	err = moveFolder(cwd+"\\docs", cwd+"\\mydocs")
	if err != nil {
		fmt.Println(err)
		return
	}

	// Rename file and folder in the filesystem root (requires administrative privileges)
	root := "C:\\"
	err = moveFile(root+"input.txt", root+"output.txt")
	if err != nil {
		fmt.Println(err)
		return
	}

	err = moveFolder(root+"docs", root+"mydocs")
	if err != nil {
		fmt.Println(err)
		return
	}
}
