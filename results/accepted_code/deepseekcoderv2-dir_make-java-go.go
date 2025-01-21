package main

import (
	"fmt"
	"os"
)

func createDir(path string) error {
	err := os.MkdirAll(path, os.ModePerm)
	if err == nil {
		fmt.Println("Path successfully created")
	}
	return err
}

func main() {
	err := createDir("C:/parent/test")
	if err != nil {
		fmt.Println("Error:", err)
	}
}
