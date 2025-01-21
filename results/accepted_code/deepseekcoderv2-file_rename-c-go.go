package main

import (
	"os"
)

func main() {
	// Rename in current working directory
	err := os.Rename("input.txt", "output.txt")
	if err != nil {
		fmt.Println("Error renaming input.txt to output.txt:", err)
	}

	err = os.Rename("docs", "mydocs")
	if err != nil {
		fmt.Println("Error renaming docs to mydocs:", err)
	}

	// Rename in filesystem root
	err = os.Rename("/input.txt", "/output.txt")
	if err != nil {
		fmt.Println("Error renaming /input.txt to /output.txt:", err)
	}

	err = os.Rename("/docs", "/mydocs")
	if err != nil {
		fmt.Println("Error renaming /docs to /mydocs:", err)
	}
}
