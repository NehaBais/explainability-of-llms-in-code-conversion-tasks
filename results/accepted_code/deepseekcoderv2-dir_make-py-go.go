package main

import (
	"fmt"
	"os"
)

func mkdirp(path string) error {
	// Try to create the directory
	err := os.MkdirAll(path, 0777) // 0777 for mode is used to specify that we want full permissions
	if err != nil {
		// Check if the error is because the directory already exists
		if os.IsExist(err) {
			return nil
		}
		return err
	}
	return nil
}

func main() {
	path := "./path/to/dir"
	err := mkdirp(path)
	if err != nil {
		fmt.Println("Error:", err)
	} else {
		fmt.Println("Directory created successfully.")
	}
}
