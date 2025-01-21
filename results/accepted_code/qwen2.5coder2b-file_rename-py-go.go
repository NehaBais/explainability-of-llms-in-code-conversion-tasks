package main

import (
	"fmt"
	"os"
)

func renameFiles() {
	file1 := "input.txt"
	file2 := "docs"
	outputDir := "mydocs"

	// Renaming files within the current working directory
	err := os.Rename(file1, outputDir+"/"+file1)
	if err != nil {
		fmt.Println("Error renaming file:", err.Error())
		return
	}

	err = os.Rename(file2, outputDir+"/"+file2)
	if err != nil {
		fmt.Println("Error renaming file:", err.Error())
		return
	}

	// Renaming files within the filesystem root
	rootOutputDir := "/"
	err = os.Rename(rootOutputDir+file1, rootOutputDir+"mydocs"+file1)
	if err != nil {
		fmt.Println("Error renaming file:", err.Error())
		return
	}

	err = os.Rename(rootOutputDir+file2, rootOutputDir+"mydocs"+file2)
	if err != nil {
		fmt.Println("Error renaming file:", err.Error())
		return
	}
}

func main() {
	renameFiles()
}
