package main

import (
	"fmt"
	"os"
)

func mkdirp(path string) error {
	err := os.MkdirAll(path, 0755)
	if err != nil && os.IsExist(err) == false {
		return fmt.Errorf("failed to create directory: %v", err)
	}
	return nil
}

func main() {
	err := mkdirp("./path/to/dir")
	if err != nil {
		fmt.Println(err)
	} else {
		fmt.Println("Directory created successfully.")
	}
}
