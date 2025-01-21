package main

import (
	"fmt" // <-- import the fmt package
	"os"
	"path/filepath"
)

func main() {
	// Rename file "input.txt" to "output.txt" here
	src := "input.txt"
	dst := "output.txt"
	err := os.Rename(src, dst)
	if err != nil {
		fmt.Println("Error renaming file:", err)
	} else {
		fmt.Println("File renamed successfully")
	}

	// Rename directory "docs" to "mydocs" here
	src = "docs"
	dst = "mydocs"
	err = os.Rename(src, dst)
	if err != nil {
		fmt.Println("Error renaming directory:", err)
	} else {
		fmt.Println("Directory renamed successfully")
	}

	// Rename file "/input.txt" to "/output.txt" in the root filesystem
	src = filepath.Join(os.Getwd(), "input.txt")
	dst = filepath.Join(os.Getwd(), "output.txt")
	err = os.Rename(src, dst)
	if err != nil {
		fmt.Println("Error renaming file in root filesystem:", err)
	} else {
		fmt.Println("File renamed successfully in root filesystem")
	}

	// Rename directory "/docs" to "/mydocs" in the root filesystem
	src = filepath.Join(os.Getwd(), "docs")
	dst = filepath.Join(os.Getwd(), "mydocs")
	err = os.Rename(src, dst)
	if err != nil {
		fmt.Println("Error renaming directory in root filesystem:", err)
	} else {
		fmt.Println("Directory renamed successfully in root filesystem")
	}
}
