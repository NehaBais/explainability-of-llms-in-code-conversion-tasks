package main

import (
	"fmt"
	"io/ioutil"
	"os"
	"path/filepath"
)

const (
	FILE_NAME = "output.txt"
	DIR_NAME  = "docs"
)

func main() {
	if !Create(".") && !Create("/") {
		fmt.Println("Error: Failed to create directories or files")
		os.Exit(1)
	}
}

func Create(root string) (bool, error) {
	fPath := filepath.Join(root, FILE_NAME)
	dPath := filepath.Join(root, DIR_NAME)
	file, err := os.OpenFile(fPath, os.O_RDWR|os.O_CREATE, 0644)
	if err == nil {
		_, _ = ioutil.WriteFile(fPath, []byte{}, 0644)
		return true, nil
	}
	dirErr := os.Mkdir(dPath, 0755)
	if dirErr == nil {
		return false, nil
	}
	return false, fmt.Errorf("Failed to create %s or %s: %v", FILE_NAME, DIR_NAME, filepath.Join(root, fPath))
}
