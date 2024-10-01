package main

import (
	"fmt"
	"io/fs"
	"os"
	"path/filepath"
)

func mkdir(name string) error {
	if err := os.MkdirAll(name, 0755); err != nil && !os.IsExist(err) {
		return err
	}
	return nil
}

func main() {
	dirName := "./path/to/dir"
	fmt.Println("Creating directory", dirName)

	if err := mkdir(dirName); err == nil {
		fmt.Println("Directory created successfully.")
	} else {
		fmt.Printf("Error creating directory: %s\n", err)
	}
}
