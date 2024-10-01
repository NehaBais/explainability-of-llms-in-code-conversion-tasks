package main

import (
	"fmt"
	"os"
)

func main() {
	// Move file in current directory
	if err := os.Rename("input.txt", "output.txt"); err != nil {
		fmt.Println(err)
	}

	// Move directory in current directory
	if err := os.Rename("docs", "mydocs"); err != nil {
		fmt.Println(err)
	}

	// Move file in root directory
	if err := os.Rename("/input.txt", "/output.txt"); err != nil {
		fmt.Println(err)
	}

	// Move directory in root directory
	if err := os.Rename("/docs", "/mydocs"); err != nil {
		fmt.Println(err)
	}
}
