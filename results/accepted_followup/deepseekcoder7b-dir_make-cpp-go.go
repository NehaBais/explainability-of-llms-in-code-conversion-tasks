package main

import (
	"fmt"
	"os"
)

func createDir(path string) error {
	if _, err := os.Stat(path); os.IsNotExist(err) {
		err = os.MkdirAll(path, 0755)
		if err != nil {
			fmt.Printf("couldn't create directory: %s\n", path)
			return err
		}
	}
	return nil
}

func main() {
	if len(os.Args) != 2 {
		fmt.Println("usage: mkdir <path>")
		os.Exit(-1)
	}

	err := createDir(os.Args[1])
	if err != nil {
		os.Exit(-1)
	}
}
