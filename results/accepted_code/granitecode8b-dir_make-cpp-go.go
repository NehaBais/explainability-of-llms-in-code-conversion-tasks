package main

import (
	"fmt"
	"os"
)

func mkdirP(path string) error {
	if _, err := os.Stat(path); !os.IsNotExist(err) {
		return nil
	}
	err := os.MkdirAll(path, 0755)
	if err != nil {
		return fmt.Errorf("failed to create directory: %v", err)
	}
	return nil
}
func main() {
	if len(os.Args) != 2 {
		fmt.Println("usage: mkdir <path>")
		os.Exit(-1)
	}
	path := os.Args[1]
	err := mkdirP(path)
	if err != nil {
		fmt.Printf("couldn't create directory: %v", err)
		os.Exit(-1)
	}
}
