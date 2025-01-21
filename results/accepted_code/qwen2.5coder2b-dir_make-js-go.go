package main

import (
	"fmt"
	"os"
)

func mkdirp(p string) error {
	return os.MkdirAll(p, 0755)
}

func main() {
	path := "./path/to/dir"
	err := mkdirp(path)
	if err != nil {
		fmt.Println("Error creating directory:", err)
	} else {
		fmt.Println("Directory created successfully.")
	}
}
