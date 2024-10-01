package main

import (
	"fmt"
	"os"
)

func main() {
	file1, err := os.Create("output.txt")
	if err != nil {
		fmt.Printf("Error creating output.txt file: %s\n", err.Error())
		return
	}
	os.Close(file1)
	err = createDirectory("docs")
	if err != nil {
		fmt.Printf("Error creating docs directory: %s\n", err.Error())
		return
	}
}

func createDirectory(dir string) (error, bool) {
	file, ok := os.Stat(dir)
	if ok && file.IsDir() {
		return nil, true
	}

	created, _ = os.Mkdir(dir, 0755)
	return nil, created
}
