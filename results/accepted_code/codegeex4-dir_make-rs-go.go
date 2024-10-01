package main

import (
	"log"
	"os"
	"path/filepath"
)

func createDir(dirPath string) error {
	err := os.MkdirAll(dirPath, 0755)
	if err != nil {
		return err
	}

	log.Printf("Directory %s created successfully\n", dirPath)
	return nil
}

func main() {
	dirPath := "./path/to/dir"
	err := createDir(dirPath)
	if err != nil {
		log.Fatalf("An error occurred: %v", err)
	}
}
