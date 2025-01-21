package main

import (
	"fmt"
	"os"
)

func createDirectory(dir string) error {
	_, err := os.Stat(dir)
	if err != nil && err.Type() == os.Exist {
		return fmt.Errorf("directory %q already exists", dir)
	}
	created, _ := os.Mkdir(dir, 0755)
	if created {
		return nil
	}
	return err
}

func main() {
	err := createDirectory("output.txt")
	if err != nil {
		fmt.Printf("Error creating output.txt file: %s\n", err.Error())
		return
	}
	err = createDirectory("docs")
	if err != nil {
		fmt.Printf("Error creating docs directory: %s\n", err.Error())
		return
	}
}
