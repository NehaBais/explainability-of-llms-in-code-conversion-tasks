package main

import (
	"fmt"
	"os"
)

func mkdirp(path string) error {
	if err := os.MkdirAll(path, 0755); err != nil {
		return err
	}
	fmt.Printf("Directory created or already exists: %s\n", path)
	return nil
}

func main() {
	path := "./path/to/dir"
	err := mkdirp(path)
	if err != nil {
		fmt.Println(err)
	}
}
