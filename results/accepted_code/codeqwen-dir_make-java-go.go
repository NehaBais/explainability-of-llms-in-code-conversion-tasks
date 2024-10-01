package main

import (
	"fmt"
	"os"
)

func createDirectory(path string) error {
	return os.MkdirAll(path, 0755)
}

func main() {
	err := createDirectory("C:/parent/test")
	if err != nil {
		fmt.Println(err)
	} else {
		fmt.Println("Path successfully created.")
	}
}
