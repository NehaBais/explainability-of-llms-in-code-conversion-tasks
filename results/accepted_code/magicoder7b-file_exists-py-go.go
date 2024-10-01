package main

import (
	"fmt"
	"os"
	"path/filepath"
)

func checkFileAndDirectory(filename string, directoryname string) {
	_, err := os.Stat(filename)
	if err != nil {
		fmt.Printf("File or Directory %s does not exist\n", filename)
	} else {
		fmt.Printf("File or Directory %s exists\n", filename)
	}

	_, err = os.Stat(directoryname)
	if err != nil {
		fmt.Printf("Directory %s does not exist\n", directoryname)
	} else {
		fmt.Printf("Directory %s exists\n", directoryname)
	}
}

func main() {
	checkFileAndDirectory(filepath.Join(".", "input.txt"), filepath.Join(".", "docs"))
	checkFileAndDirectory("/input.txt", "/docs")
}
