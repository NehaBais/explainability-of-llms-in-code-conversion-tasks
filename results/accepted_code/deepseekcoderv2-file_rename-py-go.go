package main

import (
	"fmt"
	"os"
)

func main() {
	// Rename in current working directory
	err := os.Rename("input.txt", "output.txt")
	if err != nil {
		fmt.Println("Error renaming file:", err)
	}
	err = os.Rename("docs", "mydocs")
	if err != nil {
		fmt.Println("Error renaming directory:", err)
	}

	// Rename in filesystem root
	err = os.Rename(string(os.PathSeparator)+"input.txt", string(os.PathSeparator)+"output.txt")
	if err != nil {
		fmt.Println("Error renaming file in root:", err)
	}
	err = os.Rename(string(os.PathSeparator)+"docs", string(os.PathSeparator)+"mydocs")
	if err != nil {
		fmt.Println("Error renaming directory in root:", err)
	}
}
