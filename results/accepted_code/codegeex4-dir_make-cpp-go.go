package main

import (
	"fmt"
	"os"
)

func createDirectory(path string) error {
	if _, err := os.Stat(path); os.IsNotExist(err) {
		err = os.MkdirAll(path, 0755)
		if err != nil {
			return fmt.Errorf("couldn't create directory: %s", path)
		}
	}
	return nil
}

func main() {
	if len(os.Args) != 2 {
		fmt.Println("usage: mkdir <path>")
		os.Exit(1)
	}

	pathToCreate := os.Args[1]

	err := createDirectory(pathToCreate)
	if err != nil {
		fmt.Println(err)
		os.Exit(1)
	}
}
