package main

import (
	"fmt"
	"os"
)

func mkdirp(path string) error {
	err := os.MkdirAll(path, 0755) // You can set your own permissions if you want
	if err != nil && !os.IsExist(err) {
		return fmt.Errorf("Error creating directory: %s", err)
	}
	return nil
}

func main() {
	err := mkdirp("/path/to/dir")
	if err != nil {
		fmt.Println(err)
	} else {
		fmt.Println("Directory created successfully")
	}
}
