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

func create(root string) error {
	fPath := filepath.Join(root, FILE_NAME)
	dPath := filepath.Join(root, DIR_NAME)

	if err := os.MkdirAll(dPath, 0755); err != nil {
		return fmt.Errorf("Failed to create directory %s: %v", dPath, err)
	}

	f, err := ioutil.TempFile(root, FILE_NAME)
	if err != nil {
		return fmt.Errorf("Failed to create file %s: %v", fPath, err)
	}
	defer os.Remove(f.Name())

	if _, err := f.Write([]byte{}); err != nil {
		return fmt.Errorf("Failed to write to file %s: %v", fPath, err)
	}

	return nil
}

func main() {
	err1 := create(".")
	err2 := create("/")

	if err1 != nil || err2 != nil {
		code := 1
		if err1 != nil {
			fmt.Printf("Error: %v\n", err1)
			code++
		}
		if err2 != nil {
			fmt.Printf("Error: %v\n", err2)
			code++
		}
		os.Exit(code)
	}
}
