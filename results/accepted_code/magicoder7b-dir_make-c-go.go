package main

import (
	"fmt"
	"os"
	"path/filepath"
)

func createDir(dir string) {
	if _, err := os.Stat(dir); err != nil {
		// Create the directory.
		fmt.Printf("Directory %s does not exist, creating...\n", dir)
		if err = os.MkdirAll(dir, 0755); err != nil {
			fmt.Println("Error creating directory: ", err)
		}
	} else {
		// Directory exists.
		fmt.Printf("Directory %s already exists\n", dir)
	}
}

func main() {
	dir := "./path/to/directory" // replace with your desired directory path
	createDir(dir)
}
