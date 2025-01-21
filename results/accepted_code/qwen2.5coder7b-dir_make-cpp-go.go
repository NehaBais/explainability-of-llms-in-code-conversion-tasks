package main

import (
	"fmt"
	"os"
)

func mkdirP(path string) error {
	err := os.MkdirAll(path, 0755)
	if err != nil {
		return err
	}
	return nil
}

func main() {
	if len(os.Args) != 2 {
		fmt.Println("usage: mkdir <path>")
		os.Exit(-1)
	}

	pathToCreate := os.Args[1]

	err := mkdirP(pathToCreate)
	if err != nil {
		fmt.Printf("couldn't create directory: %s\n", pathToCreate)
		os.Exit(-1)
	}
}
